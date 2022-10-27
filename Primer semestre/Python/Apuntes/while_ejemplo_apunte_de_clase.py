# def run():
#     total = 0
#     contador = 0
#     while total < 1000:
#         total += int(input())
#         contador += 1
#     print("La suma es igual a {}.\nLa cantidad de numeros es igual a {}.".format(total, contador))


# if __name__ == "__main__":
#     run()


def es_perfecto(n):
    suma = 1
    i = 0
    while i < n:
        if n % i == 0:
            suma += i
        i += 1
    return suma == n


if __name__ == "__main__":
    es_perfecto(2)