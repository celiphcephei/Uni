#Escribe una función llamada equivalente que reciba como parámetro una cantidad de horas, minutos y segundos
#y regrese como valor de retorno el tiempo equivalente en segundos.
#Por ejemplo:
#Si la función recibe los valores horas = 2, minutos = 20 y segundos = 8, regresará el valor 8408.
#Nota que la función no mostrará nada, solo regresa como valor de retorno la cantidad de segundos equivalente.

print("Cantidad de segundos\n")

def equivalente(h, m, s):
    m += h * 60
    s += m * 60
    return s

def main():
    horas = int(input("Horas que tardó el proceso: "))
    minutos = int(input("Dame los minutos: "))
    segundos = int(input("Dame los segundos: "))
    print(f"El total de segundos es {equivalente(horas, minutos, segundos)}")

main()
print()
main()

print()
print()

#Escribe una función llamada areaRect que reciba como parámetro el 
# largo y ancho de un rectángulo y que regresa como valor de retorno el área del rectángulo.
#Escribe una función llamada perimetroRect que reciba como parámetro el largo y 
# ancho de un rectángulo y que regresa como valor de retorno el perímetro del rectángulo.
#Observa que dentro de las funciones no mostrarás nada, solo regresarás el valor calculado usando return

def areaRect(largo, ancho):
    return largo * ancho

def perimetroRect(largo, ancho):
    return (largo * 2) + (ancho * 2)

def main1():
    largo = float(input("Largo: "))
    ancho = float(input("Ancho: "))
    op = input("Area (a) o perímetro (p): ")
    if op == "a":
        print(f"El área del rectángulo es de {areaRect(largo, ancho)}")
    elif op == "p":
        print(f"El perímetro es de {perimetroRect(largo, ancho)}")
    else:
        print("No sabes leer o qué")

main1()