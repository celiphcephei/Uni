peso = float(input("Peso (Kg): "))
altura = float(input("Altura (mt): "))
imc = peso / (altura ** 2)
if imc < 18.5:
    print("Bajo peso")
    if imc < 16:
        print("Delgadez severa")
    elif imc < 17:
        print("Delgadez moderada")
    else:
        print("Delgadez leve")
elif imc < 25:
    print("Normal")
elif imc < 30:
    print("Sobrepeso")
    print("Presobeso")
else:
    print("Obesidad")
    if imc < 35:
        print("obesidad leve")
    elif imc < 40:
        print("obesidad media")
    else:
        print("Obesidad mórbida")
