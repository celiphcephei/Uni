#Programas que usan listas

#Defina una función pares(lista)
#que recibe una lista de números enteros y regresa la cantidad de números pares en la lista.
def pares(lista):
    pares = 0
    for i in lista:
        if i % 2 == 0 or i == 0:
            pares += 1
    return pares

def main1(): 
    lista = []
    numero = 0
    contador = 0
    LIMITE = 5
    while contador != LIMITE:
        numero = int(input("Escribe un número: "))
        lista.append(numero)
        contador += 1
    print(f"La cantidad de números pares en la lista es de: {pares(lista)}")

main1()
print()

#Defina una función nones(lista) que recibe una lista de números 
#enteros y regresa una nueva lista con todos los elementos nones en la lista que recibió.
def nones(lista):
    nones = []
    for i in lista:
        if i % 2 != 0:
            nones.append(i)
    return nones


def main2():
    lista = []
    numero = 0
    contador = 0
    LIMITE = 5
    while contador != LIMITE:
        numero = int(input("Escribe un número: "))
        lista.append(numero)
        contador += 1
    print(f"Los nones en la lista son: {nones(lista)}")

main2()
print()

# Defina una función llamada cuenta_elem(lista, elem) que recibe una lista y un elemento como parámetros.
# La función regresa el número de veces que el elemento se encuentra en la lista.
def cuenta_elem(lista, elem):
    #Metodo pro 
    #return lista.count(elem)
    contador = 0
    for i in lista:
        if i == elem:
            contador += 1
    return contador
        

def main3():
    lista = []
    numero = 0
    contador = 0
    LIMITE = 5
    while contador != LIMITE:
        numero = int(input("Escribe un número: "))
        lista.append(numero)
        contador += 1
    elemento = int(input("Que número quieres comprobar: "))
    print("El número {} aparece {} veces en la lista.".format(elemento, cuenta_elem(lista, elemento)))

main3()
print()
# Define una función poner_orden(n) que pida al usuario n valores y al final regrese una lista con dichos
# valores en orden de menor a mayor. Nota: puedes utilizar el método sort() para ordenar la lista.
def poner_orden(n):
    #Corrección
    # lst = []
    # for i in range(n):
    #     v  = int(input('Dame un valor: '))
    #     lst.append(v)
    # lst.sort()
    n.sort()
    #sort(reverse = True)
    return n

def main4():
    lista = []
    numero = 0
    contador = 0
    LIMITE = 5
    while contador != LIMITE:
        numero = int(input("Escribe un número: "))
        lista.append(numero)
        contador += 1
    print(f"Los valores de menor a mayor son: {poner_orden(lista)}")

main4()
print()

# Define una función armar_frase(articulo, sustantivo, adjetivo)
# que reciba tres listas de palabras y regrese una frase armada al azar con un articulo + sustantivo + adjetivo.
import random
def armar_frase(articulo, sustantivo, adjetivo):

    artc = random.choice(articulo)
    sust = random.choice(sustantivo)
    adjt = random.choice(adjetivo)
    return f'{artc} {sust} {adjt}'


def main5():
    listArt = []
    listSust = []
    listAdjt = []
    articulo = ""
    sustantivo = ""
    adjetivo = ""
    for i in range(5):
        articulo = input("Escribe un articulo: ")
        listArt.append(articulo)
        sustantivo = input("Escribe un sustantivo: ")
        listSust.append(sustantivo)
        adjetivo = input("Escribe un adjetivo: ")
        listAdjt.append(adjetivo)
    print(f"Tu frase aleatoria es: {armar_frase(listArt, listSust, listAdjt)}")
    
main5()