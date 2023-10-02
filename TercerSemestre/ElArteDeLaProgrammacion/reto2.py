import random
heads = 0
tails = 0
def main():
    for toss in range(1000000):
        if random.randint(1, 2) == 1:
            heads += 1
        else:
           tails += 1
    
    print("Heads: ", heads)
    print("Tails: ", tails)
    print("HEads%: ", heads)
    print("Tails%: ", tails)


main()