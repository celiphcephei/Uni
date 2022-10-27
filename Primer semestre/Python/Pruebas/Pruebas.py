# def tabla(n):
#     LIMITE = 11
#     contador = 0
#     tabla = n * contador
#     while contador < LIMITE:
#         print("{} X {} = {}".format(n, contador, tabla))
#         contador += 1
#         tabla = n * contador

# def main():
#     x = int(input("Que tabla quieres: "))
#     tabla(x)
    
# main()

    

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