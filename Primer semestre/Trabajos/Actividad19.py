#Escribe una función caracter_por_caracter(cadena),
#que reciba una cadena y e imprima todos sus caracteres línea por línea
from dataclasses import replace


def caracter_por_caracter(cadena):
    for i in cadena:
        print(i,end = "*")

caracter_por_caracter("cadena")

#Escribe una función tiene_subcadena(cadena, subcadena)
#que regrese True si la cadena contiene al carácter o False en caso contrario
def tiene_subcadena(cadena, subcadena):
    return subcadena in cadena

print(tiene_subcadena("oxxo", "xo"))

#Escribe una función sin_digitos(cadena) que reciba un string y regresa
#un nuevo string igual a la cadena recibida, pero eliminando digitos
def sin_digitos(cadena):
    numeros = [i for i in range(10)]
    numeros = str(numeros)
    string2 = ""
    for i in cadena:
        if i not in numeros:
            string2 += i
    print(string2)




sin_digitos("980ho00l1aa0")

#Escribe una función permutacion(s1, s2) que reciba dos strings y regrese True
#si los strings son permutaciones de los mismos caracteres. Dos strings son permutaciones de los mismos elementos,
# si contienen los mismos caracteres, pero posiblemente en distinto orden. Ejemplo: mosca y comas.
def permutacion(s1, s2):
    if len(s1) == len(s2):
        for i in s1:
            if s1.count(i) != s2.count(i):
                return False
        return True
    else:
        return False
    
print(permutacion("mosco","comas"))