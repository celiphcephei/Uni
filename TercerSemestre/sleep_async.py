import asyncio
import time

async def asyncio_sleep():
    print('before sleep')
    await asyncio.sleep(1)
    print('after sleep')

async def asyncio_sleeps(n):
    coroutines = []
    for _ in range(n):
        coroutines.append(asyncio_sleep())

    await asyncio.gather(*coroutines)

start = time.time()
asyncio.run(asyncio_sleeps(2))
print(f'duration: {time.time() - start:.0f}')