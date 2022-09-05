def calcula_grado(n):
    if n == 0.9:
        valor = 'A'
    elif n == 0.8:
        valor = 'B'
    elif n == 0.7:
        valor = 'C'
    else:
        valor = 'F'
    return valor

def run():
    numero = float(input("Escribe un numero decimal entre 0 y 1: "))
    if numero < 1 and numero >=0:
        print(calcula_grado(numero))
    else:
        print("Score incorrecto")


if __name__ == "__main__":
    run()