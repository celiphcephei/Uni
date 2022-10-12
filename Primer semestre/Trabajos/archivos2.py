import random
#Preguntas de examen
def imprimir_bienvenida():
    print("Bienvenido al examen de comprobación de estudios!")
    print("Para cada pregunta, teclea la letra de la opción correcta.")
    print("Mucha suerte.")


def hacer_pregunta(pregunta, respuestas):
    '''Función que recibe una pregunta y posibles respuestas.
    Regresa True si el usuario acierta, False en caso contrario.
    pregunta - cadena con la pregunta
    respuestas - listas de posible s respuestas, la primera es la correcta
    '''
    print(pregunta)
    respuesta_correcta = respuestas[0]
    random.suffle(respuestas)
    opcion = 'a'
    for respuesta in respuestas:
        print(f"{opcion}. {respuesta}\t\t")
        if respuesta == respuesta_correcta:
            opcion_correcta = opcion
        opcion = chr(ord(opcion)+ 1)
    return opcion_correcta == input("Escoge una opción: ")


def main():
    imprimir_bienvenida()
    aciertos = 0
    with open('preguntas.txt', 'r') as f:
        for line in f.readlines():
            if line.startswith('P:'):
                pregunta = line[2:].strip()#Quita el salto de linea \n
            if line.startswith('R:'):
                respuestas = line[2:].split(',')
                if hacer_pregunta(pregunta, respuestas):
                    aciertos += 1
    print(f"Tuviste {aciertos} aciertos.")