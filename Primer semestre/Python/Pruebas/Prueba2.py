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
