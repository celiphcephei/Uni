import random


def tablas_de_multiplicar(n):
    print()
    print("La tabla del {}.".format(n))
    for i in range(11):
        print("{} X {} = {}".format(n, i, i * n))
    print()

def ejercicios_multiplicaciones():
    puntos = 0
    for i in range(10):
        i = random.randint(0, 10)
        n = random.randint(0, 10)
        resultado = i * n
        respuesta = 0
        print("Cuál es el número faltante en")
        print("? X {} = {}".format(i, resultado))
        respuesta = int(input())
        respuesta = respuesta * i
        if respuesta ==  resultado:
            puntos += 1
        print("Puntuación:",puntos)
        print()
    if puntos == 10:
        print("Felicidades, sabes multiplicar")
        print()
    elif puntos > 6:
        print("¡Puedes seguir practicando para alcanzar la perfección!")
        print()
    else:
        print("Escribe 'ayuda' para ver la tabla que quieras estudiar")
        print()
            
    


def ejercicio_multiplicaciones():
    print()
    print("Vamos a ver las multiplicaciones.")
    inicio1 = random.randint(0, 10)
    inicio2 = random.randint(0,10)
    inicio = 0
    while inicio == 0:
        iniciador = int(input("Para comenzar, escribe el resultado de {} X {}.\n".format(inicio1, inicio2)))
        if iniciador == (inicio1 * inicio2):
            print()
            print("Comencemos con los ejercicios.")
            ejercicios_multiplicaciones()
        elif iniciador != (inicio1 * inicio2):
            print()
            print("¿Necesitas ayuda?")
            ayuda1 = input("(Si/No)\n")
            ayuda1 = ayuda1.lower()
            print()
            if ayuda1 == "si":
                numerodetabla = int(input("Escribe el número de la tabla quieres verificar: "))
                tablas_de_multiplicar(numerodetabla)
            elif ayuda1 == "no":
                continue
            else:
                print()
                continue





def mathMain():
    print("Bienvenido al módulo de matemáticas")
    volver = input("Si quieres volver a la pantalla de inicio escribe 'Volver', si no, escribe 'No': ")
    volver = volver.lower()
    if volver == "volver":
        main()
    print()
    print("¿Qué quieres ver?\nEscribe el número corresponiente.")
    iniciador = 0
    opc = 0
    while iniciador == 0:
        opc = int(input("\4 1 Multiplicaciones\n\4 2 Lorem\n\4 3 Lorem\n"))
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
    volver = input("Si quieres volver")


    

def ciencias():
    print("")


def main():
    print("Proyecto Integrador")
    print("Tecnológico de Monterrey")
    print("\4 Renato García Morán A01799387\n\4 Andrés Cabrera Alvarado A01798681\n\4 José María Acosta Heredia A01799580")
    print()
    iniciador = 0
    while iniciador == 0:
        opcion = input("¿Qué quieres probar?\nEscribe el nombre del integrante o el nombre del módulo\nMatemáticas (Renato)\nCiencias (José)\nLectura (Andrés)\n")
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