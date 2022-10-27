def yardas(yarda):
    equivalente = 91.44
    conversion = yarda * equivalente
    return conversion


def pulgadas(pulgada):
    equivalente = 2.54
    conversion = pulgada * equivalente
    return conversion


def pies(pie):
    equivalente = 30.48
    conversion = pie * equivalente
    return conversion


def run():
    opcion = int(input("Elige 1 Pies, 2 Yardas, 3 Pulgadas: "))
    cantidad = float(input("Cantidad: "))
    if opcion == 1:
        print(f"El equivalente son {pies(cantidad)}cm.")
    elif opcion == 2:
        print(f"El equivalente son {yardas(cantidad)}cm.")
    elif opcion == 3:
        print(f"El equivalente son {pulgadas(cantidad)}cm.")
    else:
        print("Error")


if __name__ == "__main__":
    run()