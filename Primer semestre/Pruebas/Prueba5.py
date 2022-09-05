def cuenta20(numero):
    LIMITE = 19
    contador = 0
    numeros_positivos = 0
    numeros_negativos = 0
    ceros = 0
    while contador <= LIMITE:
        if numero > 0:
            numeros_positivos += 1
            contador +=1
        elif numero < 0:
            numeros_negativos += 1
            contador += 1
        elif numero == 0:
            ceros += 1
            contador += 1
        numero = int(input("Escribe un numero: "))
    print(f"La cantidad de numeros positivos es de {numeros_positivos}.\nLa canatidad de números negativos es de {numeros_negativos}\nLa cantidad de ceros es de {ceros}.")
num = int(input("Escribe un numero: "))
cuenta20(num)