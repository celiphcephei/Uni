import random


def jerarquia_de_operaciones():
    pass


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
        volver = input("Si quieres volver a la pantalla de matemáticas escribe 'Volver', si quieres volver a intentarlo no solo escribe 'No'.\n")
        volver = volver.lower()
        if volver == "volver":
            mathMain()
    elif puntos > 6:
        print("¡Puedes seguir practicando para alcanzar la perfección!")
        print()
        volver0 = input("Si quieres volver a la pantalla de matemáticas escribe 'Volver', si quieres volver a intentarlo no solo escribe 'No'.\n")
        volver0 = volver0.lower()
        if volver0 == "volver":
            mathMain
    else:
        ayuda = int(input("Escribe el número de la tabla que más trabajo te cuesta.\n"))
        tablas_de_multiplicar(ayuda)
        print("Puedes volver a intentarlo cuantas veces quieras.")
        volver1 = input("Si quieres volver a la pantalla de matemáticas escribe 'Volver', si quieres volver a intentarlo no solo escribe 'No'.\n")
        volver1 = volver1.lower()
        if volver1 == "volver":
            mathMain()
    


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
    print()
    print("¿Qué quieres ver?\nEscribe el número corresponiente.\nSi quieres volver a la pantalla de inicio escribe 'Volver'")
    iniciador = 0
    opc = 0
    while iniciador == 0:
        opc = input("\4 1 Jerarquia de operaciones\n\4 2 Multiplicaciones\n\4 3 Fracciones y divisiones\n")
        opc == opc.lower()
        if opc == "1":
            jerarquia_de_operaciones()
        elif opc == "2":
            ejercicio_multiplicaciones()
        elif opc == "3":
            pass
        elif opc == "volver":
            print()
            main()
        else:
            print()
            print("Elige una opción válida")
            continue


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
        elif opcion == "andrés" or opcion == "andres" or opcion == "lectura":
            print()
            pass
        else:
            print()
            print("Elige una opción válida")
            continue


if __name__ == "__main__":
    main()









