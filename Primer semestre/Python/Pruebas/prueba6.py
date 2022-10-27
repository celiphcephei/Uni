# def mayor(numDatos):
#     numero_mas_alto = 0
#     while True:
#         if numDatos > numero_mas_alto:
#             numero_mas_alto = numDatos
#         elif numDatos == -777:
#             break
#         numDatos = int(input("Escribe un numero o si quieres terminar el programa escribe -777: "))
#     print("El numero mas alto es: ",numero_mas_alto)

# numero =int(input("Escribe un numero: "))
# mayor(numero)

def mayor(num):
    limite = num
    contador = 0
    numMayor = 0
    while contador < limite:
        numero = int(input("Escribe un número: "))
        contador += 1
        if numero > numMayor:
            numMayor = numero
            continue
        else:
            continue
    return numMayor

num = int(input("Cuantos quieres evaluar: "))
print (f"El número mayor es {mayor(num)}")