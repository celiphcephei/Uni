#Permiten agrupar varios elementos bajo una misma variable
#lista vacia
# x = []
a = [1, 2, 3, 4]
#Son mutables, pueden ser modificadas
#Ordenadas
#anidables, listas en listas, tamaño variable
#dinámicas
def cambia(lst):
    i = 0
    while i < len(lst):
        lst[i] = "*"
        i += i


def cambia_b(lst):
    for i in range(len(lst)):
        lst[i] = "*"

def cambia_c(lst):
    for i, v in enumerate(lst):
        lst[i] = "*"

a = [1, 2, 3]

def mover_pares(lst):
    pares = []
    impares = []
    for i, v in enumerate(lst):
        if i % 2 == 0:
            pares += [v]
        else:
            impares += [v]

    # lst = pares + impares
    # for i in range(len(lst)):
    #     lst[i] = total[i]
    lst[:] = total

def cambia_d(lst):
    lst[:] = ["*"] * len(lst)

def mover_paresb(lst):
    lst[:] = lst[::2] + lst[1::2]