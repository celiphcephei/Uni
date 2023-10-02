import random
def main():
    heads = 0
    tails = 0
    for toss in range(1000000):
        if random.randint(1, 2) == 1:
            heads += 1
        else:
           tails += 1
    
    print("Heads: ", heads)
    print("Tails: ", tails)
    print("HEads%: ", (heads/1000000)*100)
    print("Tails%: ", (tails/1000000)*100)

main()
