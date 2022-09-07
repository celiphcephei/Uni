# cont = 1

# while (cont < 5):

#     print(cont)

#     cont = cont + 1
import random


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


    


ejercicios_multiplicaciones()