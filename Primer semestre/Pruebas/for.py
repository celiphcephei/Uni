# def todos_menos_tu(n):
#     for i in range(1, 101):
#         if i != n:
#             print(i)


# def cuadrados(n):
#     for i in range(n, 0, -1):
#         e = ","
#         if i == 1:
#             e = "\n"
#         print(i ** 2, end = e)


# def pares_nones():
#     contador_pares = 0
#     contador_nones = 0
#     for i in range(10):
#         i = int(input("Escribe un número: "))
#         if i % 2 == 0:
#             contador_pares += 1
#         else:
#             contador_nones += 1
#     print("Hay {} pares y {} nones".format(contador_pares, contador_nones))




# n = int(input("Escribe un numero: "))
# for i in range(11):
#     print("{} X {} = {}".format(n, i, i * n))


# def mcd(a, b):
#     for i in range(1, min(a, b) + 1):
#         if a % i == 0 and b % i == 0:
#             m = i
#     return m


# def suma_digitos(num):
#     suma = 0
#     while num > 0:
#         suma += num % 10
#         num = num // 10
#     return suma


def piramide(n):
    for i in range(1, n):
        print("*" * i)
    for i in range(n, 0, -1):
        print("*" * i)

piramide(9)