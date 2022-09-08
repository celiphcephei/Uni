# cont = 1

# while (cont < 5):

#     print(cont)

#     cont = cont + 1
# import random


# def ejercicios_multiplicaciones():
#     puntos = 0
#     for i in range(10):
#         i = random.randint(0, 10)
#         n = random.randint(0, 10)
#         resultado = i * n
#         respuesta = 0
#         print("Cuál es el número faltante en")
#         print("? X {} = {}".format(i, resultado))
#         respuesta = int(input())
#         respuesta = respuesta * i
#         if respuesta ==  resultado:
#             puntos += 1
#         print("Puntuación:",puntos)
#         print()
#     if puntos == 10:
#         print("Felicidades, sabes multiplicar")
#         print()
#     elif puntos > 6:
#         print("¡Puedes seguir practicando para alcanzar la perfección!")
#         print()
#     else:
#         print("Escribe 'ayuda' para ver la tabla que quieras estudiar")
#         print()


    


# ejercicios_multiplicaciones()

# i = 20

# while i > 11:
#     print(i)
#     i = i-1

# def f1(x):
#     if x % 3 == 0:
#         return x + 1
#     elif x % 2 == 0:
#         return x - 1
#     else:
#         return x

# y = f1(6)
# z = f1(4)
# print(y, z)

# for i in range(21 , 0, -5):
#     print(i, end=' ')

# def armonica(n):
#     total = 0
#     i = 1
#     for i in range(n + 1):
#         total = 1 / i
#         print(i)

# armonica(2)

def sum(n):
    i = 1
    s = 0.0
    for i in range(1, n+1):
        s = s + 1/i
    print(s)

sum(5)