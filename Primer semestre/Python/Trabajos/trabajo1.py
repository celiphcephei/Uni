import math as m

#Actividad 1

hipotenusa = float(input("Escribe la hipotenusa: "))
theta = m.radians(30)
cat = m.sin(theta) * hipotenusa
print("El cateto opuesto mide", cat)

print()

#Actividad 2

radio = float(input("Escribe el radio del circulo: "))
area = 4 * m.pi * (radio ** 2)
volumen = (4 * m.pi * radio ** 3) / 3
print(f"Area: {area}\nVolumen: {volumen}")

print()

#Actividad 3

x = float(input("di una longitud: "))
y = float(input("di una longitud: "))
z = float(input("di una longitud: "))
s = ( x + y + z ) / 2
area = m.sqrt(s * (s - x) * (s - y) * (s - z))
print("El area es de", area)

print()

#Actividad 4

print("Convierte los grados a radianes")
angulo = float(input("Ingresa los grados:"))
radian = (m.pi / 180) * angulo
print(f"Un total de {radian} radianes")

print()

#Actividad 5

print("Lo mismo xd")
angulo = float(input("Ingresa los grados: "))
radian = m.radians(angulo)
print(f"Un total de {radian} radianes")

print()

#Actividad 6

print("Ecuación de Tsiolkovsky")
ve = float(input("Escribe el cambio de velocidad del propulsor: "))
m0 = float(input("Escribe la masa inicial del objeto: "))
mf = float(input("Escribe la masa final del objeto: "))
v = ve * m.log(m0) / m.log(mf)
print(v)

print()

#Actividad 7

print("Distancia entre kilomteros")
print("Fórmula de Haversine")
R = 6371
lat1 = m.radians(float(input("Ingresa la latitud origen: ")))
lon1 = m.radians(float(input("Ingresa la longitud: ")))
lat2 = m.radians(float(input("Ingresa la latitud destino: ")))
lon2 = m.radians(float(input("Ingresa la longitud: ")))
a = m.sin((lat1 - lat2) / 2) ** 2 + m.cos(lat1) * m.cos(lat2) * m.sin((lon1 - lon2) / 2) ** 2
