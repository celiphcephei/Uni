#Importa random para el uso de los números aleatorios para los ejercicos de multiplicaciones
import random


def propiedades_nr():
    """
    Explica las propiedades de los números reales.
    """
    propiedades = {
        "Conmutativa" : "a + b = b + a",
        "Distributiva" : None,
        "Asociativa" : None,
        "Lorem" : None
    }


def propiedades_nReales():
    """
    Inicia la sección de preguntas de Propiedades de los números reales.
    """
    print("Bienvenido a la sección de Propiedades de los números reales")
    while True:
        pass


def ayuda_jerarquia():
    """
    Explica la jerarquia de operaciones.
    """
    print()
    print("Jerarquía de operaciones.")
    print("La jerarquía de operaciones es un conjunto de lineamientos por seguir a la hora de realizar operaciones")
    print("EL orden es el siguiente:")
    print("Primero se realizan las operaciones dentro de un paréntesis '()'")
    print("Despues se reañizan los exponentes")
    print()
    print()
    print()
    print()



def ejercicios_jerarquia():
    """
    Inicia los ejercicios de jerarquía de operaciones.
    """
    puntos = 0
    for i in range(10):
        i = random.randint(0, 10)
        x = random.randint(0, 3)
        Y = random.randint(0, 99)
        z = random.randint(0, 10)
        resultado = i * x

def jerarquia_de_operaciones():
    """
    Inicia la sección de jerarquía de operaciones.
    """
    print()
    print("Vamos a ver la Jerarquia de operaciones.")
    #Crea numeros aleatorios para una operación de inicio.
    inicio1 = random.randint(0, 99)
    inicio2 = random.randint(0,10)
    inicio3 = random.randint(0, 10)
    inicio4 = random.randint(0,3)
    resultado = inicio1 + inicio2 * inicio3 * inicio4
    while True:
        opcion = int(input("Para comenzar di el resultado de {} + {} X {} X {}\n".format(inicio1, inicio2, inicio3, inicio4)))
        #Si la respuesta es correcta inician las opereaciones.
        if opcion == resultado:
            print()
            print("Comencemos con las operaciones")
            ejercicios_jerarquia()
        #Si la respuesta es incorrecta, le pregunta si necesita ayuda para mostrarle la jerarquía de operaciones.
        elif opcion != resultado:
            print()
            print("¿Necesitas ayuda?")
            ayuda1 = input("(Si/No)\n")
            ayuda1 = ayuda1.lower()
            print()
            if ayuda1 == "si":
                ayuda_jerarquia()
            elif ayuda1 == "no":
                continue
            else:
                print()
                continue

def tablas_de_multiplicar(n):
    """
    Despliega la tabla de multiplicar del número introducido.
    """
    print()
    print("La tabla del {}.".format(n))
    for i in range(11):
        print("{} X {} = {}".format(n, i, i * n))
    print()


def ejercicios_multiplicaciones():
    """
    Da inicio a los ejercicios de multiplicaciones.
    """
    #Puntos para los ejercicios de multiplicaciones iniciando en 0.
    puntos = 0
    #Despliega 10 ejercicios diferentes en base a números aleatorios para que el usuario diga el número faltante.
    for i in range(10):
        i = random.randint(0, 10)
        n = random.randint(0, 10)
        resultado = i * n
        respuesta = 0
        print("Cuál es el número faltante en")
        print("? X {} = {}".format(i, resultado))
        while True:
            try:
                respuesta = int(input())
                break
            except:
                print("¿Tuviste un error de dedo?\nEsrcibe un número.")
                print()
        respuesta = respuesta * i
        #Si el usuario acertó, recibe un punto a la variable 'Puntos' y se imprime la misma, de no ser asi, solo se imprimen los puntos actuales.
        if respuesta ==  resultado:
            puntos += 1
        print("Puntuación:",puntos)
        print()
    #Nota a corregir después si no se me olvida, mover la opción de vuelta para no repetirlo 3 veces.
    #Si la cantidad de puntos es de 10, imprime una felicitación y da la opción de volver a intentarlo o salir.
    if puntos == 10:
        print("Felicidades, sabes multiplicar")
        print()
        volver = input("Si quieres volver a la pantalla de matemáticas escribe 'Volver', si quieres volver a intentarlo no solo escribe 'No'.\n")
        volver = volver.lower()
        if volver == "volver":
            mathMain()
    #Si la cantidad de puntos es solo mayor a 6, le da una motivación.
    elif puntos > 6:
        print("¡Puedes seguir practicando para alcanzar la perfección!")
        print()
        volver0 = input("Si quieres volver a la pantalla de matemáticas escribe 'Volver', si quieres volver a intentarlo no solo escribe 'No'.\n")
        volver0 = volver0.lower()
        if volver0 == "volver":
            mathMain
    #Si la cantidad de puntos es menor a 6, le pregunta que tabla de multiplicar es la que más trabajo le cuesta.
    else:
        while True:
            try:
                ayuda = int(input("Escribe el número de la tabla que más trabajo te cuesta.\n"))
                break
            except:
                print("Escribe un número.")
                print()
        tablas_de_multiplicar(ayuda)
        print("Puedes volver a intentarlo cuantas veces quieras.")
        volver1 = input("Si quieres volver a la pantalla de matemáticas escribe 'Volver', si quieres volver a intentarlo no solo escribe 'No'.\n")
        volver1 = volver1.lower()
        if volver1 == "volver":
            mathMain()
    


def multiplicaciones():
    """
    Da inicio a la sección de multiplicaciones.
    """
    print()
    print("Vamos a ver las multiplicaciones.")
    #Dos números aleatorios para una multiplicación que de inicio al programa.
    inicio1 = random.randint(0, 10)
    inicio2 = random.randint(0,10)
    while True:
        while True:
            try:
                iniciador = int(input("Para comenzar, escribe el resultado de {} X {}.\n".format(inicio1, inicio2)))
                break
            except:
                print("¿Tuviste un error de dedo?")
                print()
        #En caso de acertar, inician los ejercicios.
        if iniciador == (inicio1 * inicio2):
            print()
            print("Comencemos con los ejercicios.")
            ejercicios_multiplicaciones()
        #En caso de fallar pregunta si el usuario necesita ayuda.
        elif iniciador != (inicio1 * inicio2):
            print()
            print("¿Necesitas ayuda?")
            ayuda1 = input("(Si/No)\n")
            ayuda1 = ayuda1.lower()
            print()
            #Si responde que si, le pregunta que tabla quiere verificar.
            if ayuda1 == "si":
                while True:
                    try:
                        numerodetabla = int(input("Escribe el número de la tabla quieres verificar: "))
                        break
                    except:
                        print("Escribe un número.")
                        print()
                tablas_de_multiplicar(numerodetabla)
            #Si responde que no, vuelve a intentar responder la multiplicación.
            elif ayuda1 == "no":
                continue
            else:
                print()
                continue


def mathMain():
    """
    Da inicio al menú general de matemáticas.
    """
    print("Bienvenido al módulo de matemáticas")
    print()
    print("¿Qué quieres ver?\nEscribe el número corresponiente.\nSi quieres volver a la pantalla de inicio escribe 'Volver'")
    opc = 0
    #Espera recibir el número de acuerdo a la opción que quiera el usuario, en este caso, que tipo de ejercicios quiere resolver.
    while True:
        opc = input("\4 1 Jerarquia de operaciones\n\4 2 Multiplicaciones\n\4 3 Propiedades de los números reales\n")
        opc == opc.lower()
        if opc == "1":
            jerarquia_de_operaciones()
        elif opc == "2":
            multiplicaciones()
        elif opc == "3":
            propiedades_nReales()
        elif opc == "volver":
            print()
            main()
        else:
            print()
            print("Elige una opción válida")
            continue


def main():
    """
    Inicia el programa 'Proyecto Integrador'.
    """
    #Nombre del proyecto.
    print("Proyecto Integrador")
    #Nombre de la institución.
    print("Tecnológico de Monterrey")
    #Colaboradores del proyecto.
    print("\4 Renato García Morán A01799387\n\4 Andrés Cabrera Alvarado A01798681\n\4 José María Acosta Heredia A01799580")
    print()
    #Ciclo que espera recibir el nombre del integrante o sección para comenzar.
    while True:
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









