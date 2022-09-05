#García Morán Renato

print("programas que toman decisiones")
print()
#Escribe un programa que pida que se teclee un valor entero e indique
#si el número es:

#Par positivo
#Impar positivo
#Par negativo
#Impar negativo
#Para este ejercicio considera el valor 0 como par positivo.
print("Ejercicio 1")
print("Tipo de número")
print()
valor = int(input("Escribe un número entero: "))
if valor % 2 == 0 :
    if valor < 0:
        print("Par negativo")
    else:
        print("Par positivo")
else:
    if valor < 0 :
        print("Impar negativo")
    else:
        print("Impar positivo")

print()
print()

print("Solución mas rapida")
print()

if valor % 2 == 0:
    paridad = "Par"
else:
    paridad = "Impar"
if valor >= 0:
    signo = "positivo"
else:
    signo = "negativo"
print(paridad , signo)

print()
print()

#Escribe un programa que dados 3 números enteros, que representan la longitud de los lados de un triángulo,
#muestre en la pantalla el tipo de triángulo de que se trata (equilátero, isósceles o escaleno), o bien, si no se trata de un triángulo.

#Considera que X, Y y Z son los lados de un triángulo si cumplen con las siguientes condiciones:

#Todos los números son mayores que cero
#X + Y > Z
#X + Z > Y
#Y + Z > X
#es decir, la suma de dos de las medidas debe ser estrictamente mayor que la tercera.   

#Recuerda que el triángulo equilátero tiene 3 lados iguales, el isósceles tiene 2 lados iguales y el escaleno tiene los 3 lados diferentes.

print("Ejercicio 2")
print("Tipo de tirángulo")
print()
print("Escribe el valor en números enteros")
x = int(input("Lado 1: "))
y = int(input("Lado 2: "))
z = int(input("Lado 3: "))
if min(x, y, z) > 0 and (x + y) > z and (x + z) > y and (y + z) > x:
    if x == y == z:
        print("Triángulo equilatero")
    elif (x == y) or (x == z) or (y == z):
        print("Triángulo isoceles")
    else:
        print("Triángulo escaleno")
else:
    print("Los valores no representan un triángulo")