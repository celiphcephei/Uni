
def millas(kilometros):
    milla = kilometros * 1.609
    return milla

def main():
    m = float(input("Di una cantidad de millas: "))
    print(f"El total de segundos es {millas(m)}:.2f")

main()