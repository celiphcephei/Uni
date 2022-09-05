# def tablas(numero):
#     contador = 0
#     for i in range(11):
#         print("{} X {} = {}".format(numero, contador, numero * contador))
#         contador += 1


# def run():
#     x = int(input("Numero: "))
#     tablas(x)


# if __name__ == "__main__":
#     run()



def tablas(numero):
    LIMITE = 11
    contador = 1
    resultado = numero * contador
    while contador < LIMITE :
        print("{} X {} = {}".format(numero, contador, resultado))
        contador += 1
        resultado = numero * contador


def run():
    x = int(input("Un numero: "))
    tablas(x)


def end():
    final = int(input("Escribe 1 si quieres otra tabla o 2 si quieres terminar: "))
    print()
    while final == 1:
        run()
        print()
        final = int(input("Escribe 1 si quieres otra tabla o 2 si quieres terminar: "))
        print()
        continue
    else:
        print()
        f = input("Fin del Programa")


if __name__ == "__main__":
    run()
    print()
    end()