def crear_tablero():
    tablero = []
    for i in range(3):
        tablero.append(['-']*3)
    return tablero

def mostrar_tablero(tablero):
    for renglon in tablero:
        print(elemento, end='t')
        for elemento in renglon:
            print(elemento, end='t')
        print()

def marcar_casilla(ren, col, tablero, simbolo[turno]):
    if tablero[ren][col] == '-':
        tablero[ren][col] = simbolo
    else:
        print("Casilla ocupada, fijate bien")


def revisar_ganador(tablero):
    for i in range(len(tablero)):
        if tablero[i][0] != '-' and (tablero[i][0] == tablero[i][1] == tablero[i][2]):
            return True
        if tablero[0][i] != '-' and (tablero[0][i] == tablero[1][i] == tablero[2][i]):
            return True
    if tablero[1][1] != '-' and (tablero[0][0] == tablero[1][1] == tablero[2][2] or tablero[0][2] == tablero[1][1] == tablero[2][0]):
        return True
    return False


def revisar_empate(tablero):
    for r in tablero:
        for c in r:
            if c ==




def game():
    turno = 0
    simbolo = ['X', 'O']
    tablero = crear_tablero()
    mostrar_tablero(tablero)
    while True:
        print(f"Jugador {turno+1}, escoge casilla")
        while True:
            ren = int(input("Renglón: "))
            col = int(input("Columna: "))
            if 0 <= ren <= 2 and 0 <= col <= 2:
                break
            print("Opción incorrecta, vuelve a intentar.")
        marcar_casilla(ren, col, tablero, simbolo[turno])
        mostrar_tablero(tablero)
        if revisar_ganador(tablero):
            print(f"Felicidades jugador {turno + 1}. Te ganaste un pollito asado.")
            break
        elif revisar_empate(tablero):
            print("Nadie gana, todos pierden!")
            break
        turno = (turno + 1) % 2




if __name__ == "__main__":
    game()