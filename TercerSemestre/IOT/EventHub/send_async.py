import time
import datetime
import asyncio
import os
import csv
import json

from azure.eventhub.aio import EventHubProducerClient
from azure.eventhub.exceptions import EventHubError
from azure.eventhub import EventData


async def send_event_data_batch_with_limited_size(producer, filename):
    # Without specifying partition_id or partition_key
    # the events will be distributed to available partitions via round-robin.
    event_data_batch_with_limited_size = await producer.create_batch()

    # read csvfile
    with open(filename, 'r', encoding = 'utf8', newline='') as txtfile: 
        # creating a txt reader object 
        reader = csv.reader(txtfile, delimiter=',')
        
        for line in reader:
            reading = {'id': line[0], 'timestamp': str(datetime.datetime.utcnow()), 'temperature': line[1], 'humidity': line[2], 'light': line[3], 'co2': line[4], 'humidityRatio': line[5]}
            s = json.dumps(reading) # Convert the reading into a JSON string.
            
            try:
                event_data_batch_with_limited_size.add(EventData(s)) # Add event data to the batch.
            except ValueError:
                # EventDataBatch object reaches max_size.
                # New EventDataBatch object can be created here to send more data.
                # break
                await producer.send_batch(event_data_batch_with_limited_size)
                event_data_batch_with_limited_size = await producer.create_batch()
                event_data_batch_with_limited_size.add(EventData(s)) # Add event data to the batch.
            
                continue


async def run():

    producer = EventHubProducerClient.from_connection_string(
        conn_str='Endpoint=sb://teccemiot.servicebus.windows.net/;SharedAccessKeyName=RootManageSharedAccessKey;SharedAccessKey=BibBUUm7q+lrTBHiJceia022cY1sqXAH++AEhDVj0T8=',
        eventhub_name='teccemiot2'
    )
    async with producer:
        await send_event_data_batch_with_limited_size(producer, 'DatosPruebaMQTT.csv')



asyncio.run(run())
