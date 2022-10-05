m = [[2, -5, 11, 0],
     [-9, 4, 6, 13],
     [4, 7, 12, -2]]


def imprimir_matriz(m):
    for renglon in m:
        for valor in renglon:
            print(valor, end = "\t")
        print()

imprimir_matriz(m)


def crear_matriz(r, c, v=0):
    m = []
    for i in range(r):
        m_r = []
        for j in range(c):
            m_r.append(v)
        m.append(m_r)
    return m

print(crear_matriz(3,2,1))