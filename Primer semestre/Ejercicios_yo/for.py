def invitados(nombre):
    nuevos = nombre
    gente_presente = []
    gente_presente += [nuevos]
    return gente_presente


def main():
    print("Bucle 'for' codigos de repaso para examen")
    print()
    print("Lista de asistencia")
    nombre = input("¿Cuál es el nombre?\n")
    lista = invitados(nombre)
    contador = 0
    while contador == 0:
        otra_persona = input("\n¿Hay una persona más? (Si/No)\n")
        otra_persona.lower()
        if otra_persona == "si":
            nombre = input("\n¿Cuál es el nombre?\n")
            lista += invitados(nombre)
            continue
        elif otra_persona == "no":
            break
        else:
            print("Vuelve a iniciar el programa.")
            break
    print()
    print("Los invitados son:")
    for i in lista:
        print(i)



if __name__ == "__main__":
    main()