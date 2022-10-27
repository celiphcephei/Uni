def run():
    dato_1 = int(input("Escribe un número: "))
    dato_2 = int(input("Escribe un número: "))
    dato_3 = int(input("Escribe un número: "))
    resultado_1 = dato_1 + dato_2 + dato_3
    resultado_2 = dato_1 * dato_2 * dato_3
    resultado_3 = dato_1 / dato_2 + dato_3
    resultado_4 = resultado_1 / resultado_2
    print("Resultado 1: {}\nResultado 2: {}\nResultado 3: {}\nResultado 4: {:.2f}".format(resultado_1, resultado_2, resultado_3, resultado_4))
    print()
    nombre = input("¿Cuál es tu nombre?\n")
    ciudad = input("¿Cuál es la ciudad?\n")
    print("Hola {} bienvenido a {}".format(nombre, ciudad))


if __name__ == "__main__":
    run()