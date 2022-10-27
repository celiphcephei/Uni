# Cuadrante: El plano cartesiano se divide en 4 cuadrantes, que van en sentido 
# contrario a las manecillas del reloj. El cuadrante depende del signo de las 
# coordenadas del punto en X y Y.
# Escribe una función llamada cuadrante que reciba un par de coordenadas 
# numéricas (x, y) y regrese un entero representando el cuadrante en el que se 
# encuentra el punto (1, 2, 3 o 4). Para este ejercicio puedes ignorar coordenadas 
# en el eje (x, y o ambos iguales a 0). 
def cuadrante(x, y):
    if x < 0:
        if y < 0:
            return 3
        else:
            return 2
    else:
        if y > 0:
            return 1
        else:
            return 4

def run():
    coordenada_x = int(input("Introduce la coordenada X: "))
    coordenada_y = int(input("Introduce la coordenada y: "))
    print("Es el cuadrante: ",cuadrante(coordenada_x, coordenada_y))


if __name__ == "__main__":
    run()