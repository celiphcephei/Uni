def mathMain():
    print("lorem")
    opc = input("¿Qué quieres hacer?")


def ciencias():
    print("Lorem")



def main():
    print("Proyecto Integrador")
    print("Tecnológico de Monterrey")
    print("Renato García Morán A01799387")
    print()
    iniciador = 0
    while iniciador == 0:
        opcion = input("¿Qué quieres probar?\nEscribe el nombre del integrante o el nombre del módulo\nMatemáticas (Renato)\nCiencias()\nLectura ()\n")
        opcion.lower()
        if opcion == "renato" or opcion == "matematicas" or opcion == "matemáticas":
            print()
            mathMain()
        elif opcion == "ciencias":
            pass
        elif opcion == "ciencias":
            pass
        else:
            print()
            print("Elige una opción válida")
            continue






if __name__ == "__main__":
    main()