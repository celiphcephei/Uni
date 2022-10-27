import math as m

def area_cilindro(radio, altura):
    area = ((2 * m.pi) * radio * altura) + (2 * m.pi) * radio ** 2
    return area


def volumen_cilindro(radio, altura):
    volumen = m.pi * (radio ** 2) * altura
    return volumen


def run():
    radio = float(input("Cual es el radio del cilindro: "))
    altura = float(input("Cual es la altura del cilindro: "))
    print(f"Area = {area_cilindro(radio, altura):.2f}\nVolumen = {volumen_cilindro(radio, altura):.2f}")


if __name__ == "__main__":
    run()