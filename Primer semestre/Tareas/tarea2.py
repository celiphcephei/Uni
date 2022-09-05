#Tarea 2
#García Morán Renato A01799387
print("Tarea 2")
print()

#Escribe un programa que lea un valor entero. Suponer que el número es un día 
#de la semana y que 1 corresponde a lunes, 2 a martes, 3 a miércoles y así 
#sucesivamente. Como salida, mostrar el nombre del día. Si el número es menor a 
#1 o superior a 7, se debe mostrar un mensaje de error.  

print("Día de la semana")
dia = int(input("Escribe un número de 1 al 7: "))
if dia == 1:
    print("Lunes")
elif dia == 2:
    print("Martes")
elif dia == 3:
    print("Miercoles")
elif dia == 4:
    print("Jueves")
elif dia == 5:
    print("Viernes")
elif dia == 6:
    print("Sábado")
elif dia == 7:
    print("Domingo")
else:
    print("Lee bien las instrucciones :)")

print()
#Escribe un programa que permita Ingresar tres números enteros y diga si alguno 
#de ellos es la suma de los otros dos. (Ej. Dados 2, 15, 13, responder que en efecto 
#uno de los números es la sumatoria de los otros dos). 

num1 = int(input("Escribe un número: "))
num2 = int(input("Escribe otro número: "))
num3 = int(input("Tercer número: "))
if (num1 + num2 == num3) or (num2 + num3 == num1) or (num3 + num1 == num2):
    print("Uno de los números es la suma de los tros 2")
else:
    print("Hola")

print()

#Escribe un programa que pida tres valores enteros y regrese el valor intermedio 
#(Ej. Dados 28, 32 y 15, el valor intermedio es 28, ya que es 28 >= 15 y 28 <= 32)  

x = int(input("Escribe un número entero: "))
y = int(input("Escribe otro número entero: "))
z = int(input("Escribe otro número entero: "))
if (x >= y and x <= z) or (x >= z and x <=y):
    print(x)
elif (y >= x and y <= z) or (y >= z and y <=x):
    print(y)
else:
    print(z)

print()

#Implementa un programa que calcule la calificación final del curso de 
#computación. El programa tiene que pedir la calificación de los 3 exámenes 
#parciales y la calificación del proyecto final. La calificación final se obtendrá́ 
#como 70% Promedio de parciales y 30% proyecto final. Si la calificación es 
#mayor igual a 70 el mensaje incluye la leyenda “APROBADO CON: X” si la 
#calificación es menor a 70 el mensaje incluye la leyenda “REPROBADO CON: X” 
#donde X es la calificación final.  

parcial1 = float(input("Escribe la calificación del parcial 1: ")) 
parcial2 = float(input("Escribe la calificación del parcial 2: ")) 
parcial3 = float(input("Escribe la calificación del parcial 3: ")) 
final = float(input("Escribe la calificación del proyecto final: "))

parciales = parcial1 + parcial2 + parcial3
pParcial = (parciales * 0.7) / 3
pFinal = final * 0.3

cFinal = (pParcial + pFinal)

if cFinal >=7:
    print(f"Aprobado con {cFinal:.2f}")
else:
    print(f"Reprobado con {cFinal:.2f}")

print()

#Escribe un programa que ayude a calcular la propina a dejar en un restaurante. 
#El programa deberá pedir el total de la cuenta, el número de comensales y la 
#calidad del servicio (‘bueno’, ‘regular’ o ‘malo’). El porcentaje de propina 
#deberá ser de 10% para mesas de hasta 4 comensales y 15% para el resto. 
#Además, si el servicio fue ‘bueno’, agregar 2% extra, pero si fue ‘malo’ restar 2%. 
#(Ej. Una mesa de 4 comensales que recibió servicio ‘bueno’ deberá dejar 12%, 
#mientras que una de 5 que recibió servicio ‘malo’ debería dejar 13%). 

print("Propina")
print()

total = float(input("Cual fue el total de la cuenta: "))
com = float(input("Total de comensales: "))
calSer = float(input("Calidad de servicio\n(1) Bueno\n(2) Regular\n(3) Malo\n"))
if com <= 4:
    propina = 0.1
elif com > 4:
    propina = 0.15
if calSer == 1:
    propina += 0.02
elif calSer == 3:
    propina -= 0.02
pTotal = total * propina
fin = total + pTotal
propina *= 100
print("El Total de la cuenta fue de {} pesos.\nEl procentaje de propina es de %{:.2f}\nTotal de propina: {:.2f} pesos.\nTotal con propina {} pesos.".format(total, propina, pTotal, fin))

print()
print()
xd = input("Pulsa cualquier tecla + ENTER para finalizar el programa.\n")