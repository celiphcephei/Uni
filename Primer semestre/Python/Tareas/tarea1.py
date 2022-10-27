#García Morán Renato A01799387

#Programa que calcule e imprima el área de un triángulo.
#Debes de pedir al usuario la base y altura,
#y desplegar el resultado en la consola.
print("CALCULA EL AREA DE UN TRIANGULO")
x = int(input("Dime la base: "))
y = int(input("Dime la altura: "))
z = (x*y)/2
print("El área del triángulo es: ",z)


#Programa que muestre al cliente el total a pagar por su compra si
#se tiene un 15% de descuento en toda la tienda.
#Debes de pedir al usuario el precio de 4 productos
#y desplegar elresultado en la consola.
print("\nCALCULA EL TOTAL DE 4 PRODUCTOS CON 15% DE DESCUENTO")
a = float(input("Precio del producto 1: "))
b = float(input("Precio del producto 2: "))
c = float(input("Precio del producto 3: "))
d = float(input("Precio del producto 4: "))
x = (a + b + c + d) * 0.85
print("El total a pagar es de: " ,x)


#Programa que pida al usuario una cantidad en pesos y despliegue su
#equivalente en dólares. Asume un tipo de cambio de 1 dólar = 22.50 pesos.
print("\nCAMBIO DE PESOS A DOLARES")

x = float(input("Pesos: "))
y = float(22.5)
z = x / y
print(f"{z:.2f} dolares")


#Programa que convierta una temperatura leída en grados Fahrenheit
#a grados Celsius con la fórmula: C = (5/9) * (F - 32),
#para cualquier valor de F. Debes de desplegar el resultado en la consola. 
print("\nCAMBIO DE GRADOS FAHRENHEIT A GRADOS CELSIUS")
x = float(input("Grados Fahrenheit: "))
y = (5 / 9)*(x - 32)
print(f"{y:.3f} Grados Celsius")


#Programa que exprese la capacidad de un disco duro en megabytes, kilobytes 
#y bytes, conociendo la capacidad del disco en gigabytes. Debes de desplegar 
#el resultado en la consola para cada una de las unidades de capacidad. 
#Considere que:   
#1 kilobytes = 1024 bytes      
#1 megabytes = 1024 kilobytes   
#1 gigabyte = 1024 megabytes 
print("\nCAPACIDAD DE DISCO DURO EN DISTINTOS VALORES")
x = int(input("Ingresa la capacidad en Gigabytes: "))
r = 1024
b = x * r
a = b * r
print(f"{b} Megabytes\n{a} Kilobytes")


print("\nFin del programa")