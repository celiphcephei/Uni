m = [[1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]]

def crear_matriz(r, c, v=0):
    m = []
    for i in range(r):
        m_r = []
        for j in range(c):
            m_r.append(v)
        m.append(m_r)
    return m

def sumar_uno(m):
    renglones = len(m)
    columnas = len(m[0])
    r = crear_matriz(renglones, columnas)
    for i in range(renglones):
        for j in range(columnas):
            r[i][j] = m[i][j] + 1
    return r


def diagonal(m):
    renglones = len(m)
    r = []
    count = 0
    for i in range(renglones):
        r.append(m[i][count])
        count += 1
    return r

print(diagonal(m))

def suma_total(m):
    renglones = len(m)
    columnas = len(m[0])
    total = 0
    for i in range(renglones):
        for j in range(columnas):
            total += m[i][j]
    return total

def es_cuadrada(m):
    renglones = len(m)
    columnas = len(m[0])
    return renglones == columnas