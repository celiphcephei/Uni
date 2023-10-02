import random

def numeros_random():
    for i in range(10):
        n = random.randint(1, 10)
        print(n, end=' ')

def main():
    numeros_random()

main()