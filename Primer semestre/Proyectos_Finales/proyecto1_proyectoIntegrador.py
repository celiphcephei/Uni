import random


def ejercicio_multiplicaciones():
    print()
    print("Vamos a ver las multiplicaciones.")
    inicio1 = random.randint(0, 9)
    inicio2 = random.randint(0,9)
    inicio = 0
    while inicio == 0:
        iniciador = int(input("Para comenzar, escribe el resultado de {} X {}.\n".format(inicio1, inicio2)))
        if iniciador == (inicio1 * inicio2):
            print("hola")
        else:
            print("Necesitas ayuda?")




def mathMain():
    print("Bienvenido al módulo de matemáticas")
    print("¿Qué quieres ver?\nEscribe el número corresponiente.")
    iniciador = 0
    opc = 0
    while iniciador == 0:
        opc = int(input("\4 1 Multiplicaciones\n\4 2 Lorem\n\4 3 Lorem"))
        if opc == 1:
            ejercicio_multiplicaciones()
        elif opc == 2:
            pass
        elif opc == 3:
            pass
        else:
            print()
            print("Elige una opción válida")
            continue


    

def ciencias():
    print("")


def main():
    print("Proyecto Integrador")
    print("Tecnológico de Monterrey")
    print("\4 Renato García Morán A01799387\n\4 Andrés Cabrera Alvarado A01798681\n\4 José María A01799580")
    print()
    iniciador = 0
    while iniciador == 0:
        opcion = input("¿Qué quieres probar?\nEscribe el nombre del integrante o el nombre del módulo\nMatemáticas (Renato)\nCiencias(José)\nLectura (Andrés)\n")
        opcion = opcion.lower()
        if opcion == "renato" or opcion == "matematicas" or opcion == "matemáticas":
            print()
            mathMain()
        elif opcion == "josé" or opcion == "jose" or opcion == "ciencias":
            print()
            pass
        elif opcion == "andrés" or opcion == "andrés" or opcion == "lectura":
            print()
            pass
        else:
            print()
            print("Elige una opción válida")
            continue


if __name__ == "__main__":
    main()