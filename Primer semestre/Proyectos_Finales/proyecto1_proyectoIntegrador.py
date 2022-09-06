def mathMain():
    print("lorem")
    opc = input("¿Qué quieres hacer?")



def main():
    print("Proyecto Integrador")
    print("Tecnológico de Monterrey")
    print("Renato García Morán A01799387")
    print()

    opcion = ''
    opcion.lower()
    iniciador = 0

    while iniciador == 0:
        opcion = input("¿Qué quieres probar?\nEscribe el nombre del integrante o el nombre del módulo\nMatemáticas (Renato)\nCiencias()\nLectura ()\n")
        if opcion == "renato" or opcion == "matematicas" or opcion == "matemáticas":
            print()
            mathMain()
            iniciador += 1
        elif opcion == "ciencias":
            pass






if __name__ == "__main__":
    main()