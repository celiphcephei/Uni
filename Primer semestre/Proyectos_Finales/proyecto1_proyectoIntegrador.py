#Importa random para el uso de los números aleatorios para los ejercicos de multiplicaciones
import random

MEMBERS = [
    {
        "name" : "Renato",
        "last_name" : "Garcia",
        "matric" : "A01799387",
        "School" : "Instituto Tecnológico y de Estudios Superiores de Monterrey",
    },
    {
        "name" : "Andrés",
        "last_name" : "Cabrera",
        "matric" : "A01798681",
        "School" : "Instituto Tecnológico y de Estudios Superiores de Monterrey",
    },
    {
        "name" : "José",
        "last_name" : "Acosta",
        "matric" : "A01799580",
        "School" : "Instituto Tecnológico y de Estudios Superiores de Monterrey",
    },
]




#****************************************************************************************************************************
#****************************************************************************************************************************
#****************************************************************************************************************************
#______________________________________________________LECTURA_______________________________________________________________
#_______________________________________________Andrés Cabrera Alvarado______________________________________________________
#_____________________________________________________A01798681______________________________________________________________


def comprehensión_lectura():
    print("Veamos que tan buena es tu comprehensión lectora.")
    prim_lect = "Una niña desarrolla una capacidad mental extraordinaria a pesar de sus padres descuidados y de una directora abusiva"
    print("Primera lectura:\n {prim_lect}" )
    print("¿Qué le falta a la oración?\n a) punto y coma\n b) punto final y coma\n c) parentesis y coma")
    a = "punto y coma"
    b = "punto final y coma"
    c = "perentesis y coma"
    elección = input("¿Qué letra escoges?: ")
    if elección == b:
        print("Muy bien")
    else:
        print("Puedes mejorar, continua")
    return comprehensión_lectura()

def ejercicio_reescribir():
    print("Reescribe el siguiente parrafo de la manera correcta")
    parrafo = print("Don Manuel tenia un campo grande donde habia plantado un monton de arboles, la mayoria de ellos, frutales. Eran arboles hermosos grandes y llenos de las mas ricas frutas. En este campo habia ciruelos, naranjos, limoneros, arboles de mandarinas de higos y hasta nogales que son los arboles que nos dan las nueces.")

    if parrafo == "Don Manuel tenía un campo grande donde había plantado un montón de árboles, la mayoría de ellos, frutales. Eran árboles hermosos, grandes y llenos de las más ricas frutas. En este campo había ciruelos, naranjos, limoneros, árboles de mandarinas, de higos y hasta nogales que son los árboles que nos dan las nueces.":
        print("Excelente trabajo, sigue así")
    else:
        print("Puedes mejorar, no te rindas crack")
    
    print("¿Quíeres ayuda?")
    ayuda = input("Si / No")
    if ayuda == "Si":
        print("Recuerda de mantener los acentos, al igual de checar las palabras que necesiten del uso de comas")
    else:
        print("Ta bueno")

def ejercio_lectura():
    print("En este ejercicio tendrás que leer una pequeña lectura y contestar lo siguiente:")
    print("Gustavo recibió muy contento un sobre. \n-Por su peso, debe ser algo muy bueno, pensó. \nPoco despues empezo su curiosidad por abrir el sobre y revisar su contenido. \n -!Debe ser algún recibo o tal vez una invitación¡ \n -!Deberías abrirlo¡ Le dijo un amigo. \n Gustavo finalmente decidío abrirlo y sorprendido, había encontrado unos boletos que lo invitaban a un estreno de una nueva pelicula, como el ganador de un sorteo.")
    print("Ahora responde: (Procura contestar con una sola palabra y empezar con mayuscula)")
    dato_1 = input("¿Quíen es el personaje principal de la historía? \nResponde:")
    dato_2 = input("¿Qué fue lo que le llego al personaje? \nResponde:")
    dato_3 = input("¿Cuál era el contenido del sobre? \nResponde:")
    dato_4 = input("¿Quíen convencio a Gustavo de abrir el sobre? \nResponde:")
    dato_5 = input("¿Qué notas que le falta al texto?, porfavor separalos con comas \nResponde:")

    if dato_1 == "Gustavo":
        print("Primera pregunta: !correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_2 == "Sobre":
        print("Segunda pregunta: !Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_3 == "Boletos":
        print("Tercera pregunta: !Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_4 == "Amigo":
        print("Cuarta pregunta: !Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_5 == "Acentos":
        print("Quinta pregunta: !Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")


def lectmain():
    """
    Da inicio al menú general de Lectura.
    """
    print("Bienvenido a la sección de Lectura")
    print()
    print("¿Qué quieres ver?\nEscribe el número corresponiente.\nSi quieres volver a la pantalla de inicio escribe 'Volver'")
    #Espera recibir el número de acuerdo a la opción que quiera el usuario, en este caso, que tipo de ejercicios quiere resolver.
    while True:
        opc = input("\4 1 Ejercicios de lectura\n\4 2 Ejercicios de reescripción\n\4 3 Ejercicios de comprensión\n")
        if opc == "1":
            ejercio_lectura()
            lectmain()
        elif opc == "2":
            ejercicio_reescribir()
            lectmain()
        elif opc == "3":
            comprehensión_lectura()
            lectmain()
        elif opc == "volver":
            print()
            main()
        else:
            print()
            print("Elige una opción válida")
            continue


#****************************************************************************************************************************
#****************************************************************************************************************************
#****************************************************************************************************************************




#****************************************************************************************************************************
#****************************************************************************************************************************
#****************************************************************************************************************************

#______________________________________________________MATEMATICAS___________________________________________________________
#__________________________________________________Renato García Morán_______________________________________________________
#_______________________________________________________A01799387____________________________________________________________
def o():
    """
    ???????
    """
    print()
    print("Aqui no hay absolutamente nada o_o")
    print()


def ayuda_jerarquia():
    """
    Explica la jerarquia de operaciones.
    """
    print("""
    Jerarquía de operaciones.
    La jerarquía de operaciones es un conjunto de lineamientos por seguir a la hora de realizar operaciones
    EL orden es el siguiente:
    Primero se realizan las operaciones dentro de un paréntesis '()'
    Despues se realizan los exponentes
    Despues multiplicaciones y divisiones
    Finalmente sumas y restas.
    En caso de haber dos operaciones seguidas con el mismo grado de importancia,
    el orden es de izquierda a derecha.
    """)



def ejercicios_jerarquia():
    """
    Inicia los ejercicios de jerarquía de operaciones.
    """
    puntos = 0
    for i in range(10):
        i = random.randint(0, 10)
        x = random.randint(0, 3)
        y = random.randint(0, 99)
        z = random.randint(0, 10)
        resultado = i * x + y + z * x
        respuesta = 0
        print("Cuál es el resultado de")
        print("{} X {} + {} + {} X {} = ?".format(i, x, y, z, x))
        while True:
            try:
                respuesta = int(input())
                break
            except:
                print("¿Tuviste un error de dedo?\nEsrcibe un número.")
                print()
        #Si el usuario acertó, recibe un punto a la variable 'Puntos' y se imprime la misma, de no ser asi, solo se imprimen los puntos actuales.
        if respuesta ==  resultado:
            puntos += 1
        print("Puntuación:",puntos)
        print()
    #Nota a corregir después si no se me olvida, mover la opción de vuelta para no repetirlo 3 veces.
    #Si la cantidad de puntos es de 10, imprime una felicitación y da la opción de volver a intentarlo o salir.
    if puntos == 10:
        print("Felicidades, sabes la jerarquia de operaciones")
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
            mathMain()
    #Si la cantidad de puntos es menor a 6, le despliega la ayuda de jerarquia de operaciones.
    else:
        ayuda_jerarquia()
        print()
        print("Puedes volver a intentarlo cuantas veces quieras.")
        volver1 = input("Si quieres volver a la pantalla de matemáticas escribe 'Volver', si quieres volver a intentarlo no solo escribe 'No'.\n")
        volver1 = volver1.lower()
        if volver1 == "volver":
            mathMain()

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
        while True:
            try:
                opcion = int(input("Para comenzar di el resultado de {} + {} X {} X {}\n".format(inicio1, inicio2, inicio3, inicio4)))
                break
            except:
                print("¿Tuviste un error de dedo?")
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
            mathMain()
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
    print("Bienvenido al la sección de matemáticas")
    print()
    print("¿Qué quieres ver?\nEscribe el número corresponiente.\nSi quieres volver a la pantalla de inicio escribe 'Volver'")
    #Espera recibir el número de acuerdo a la opción que quiera el usuario, en este caso, que tipo de ejercicios quiere resolver.
    while True:
        opc = input("\4 1 Multiplicaciones\n\4 2 Jerarquia de operaciones\n\4 3 ???\n")
        opc == opc.lower()
        if opc == "1":
            multiplicaciones()
        elif opc == "2":
            jerarquia_de_operaciones()
        elif opc == "3":
            o()
        elif opc == "volver":
            print()
            main()
        else:
            print()
            print("Elige una opción válida")
            continue

#****************************************************************************************************************************
#****************************************************************************************************************************
#****************************************************************************************************************************



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
        opcion = input("¿Qué quieres probar?\nEscribe el nombre del integrante o el nombre del módulo\nMatemáticas (Renato)\nLectura (Andrés)\nCiencias (José)\n")
        opcion = opcion.lower()
        if opcion == "renato" or opcion == "matematicas" or opcion == "matemáticas":
            print()
            mathMain()
        elif opcion == "andrés" or opcion == "andres" or opcion == "lectura":
            print()
            lectmain()
        elif opcion == "josé" or opcion == "jose" or opcion == "ciencias":
            print()
            pass
        else:
            print()
            print("Elige una opción válida")
            continue


if __name__ == "__main__":
    main()









