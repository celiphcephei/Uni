# def run():
#     LIMITE = 5
#     contador = 0
#     while contador < LIMITE:
#         print("Hola mundo")
#         contador += 1



# if __name__ == "__main__":
#     run()


# def hola_mundo(n):
#     while n > 0:
#         print("Hola Mundo")
#         n -= 1


def sumatoria(a, b):
    lim_inferior = min(a, b)
    lim_superior = max(a, b)
    total = 0
    while lim_inferior < lim_superior:
        total += lim_inferior
        lim_inferior += 1
    return total