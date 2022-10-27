m3 = [[1, 2], [2, 1]]
m2 = [[7, -8, 2, -4], [8, 6, -9, 1], [-2, 9, 4, 7]]

def suma_columnas(m):
    renglones = len(m)
    columnas = len(m[0])
    list = []
    for n in range(columnas):
      list.append(0)
    for i in range(renglones):
        for j in range(columnas):
            value = m[i][j]
            list[j] = list[j] + value
    return list


print(suma_columnas(m2))

# m = [[1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]]


# def crear_matriz(r, c, v=0):
#     m = []
#     for i in range(r):
#         m_r = []
#         for j in range(c):
#             m_r.append(v)
#         m.append(m_r)
#     return m

# def sumar_uno(m):
#     renglones = len(m)
#     columnas = len(m[0])
#     r = crear_matriz(renglones, columnas)
#     for i in range(renglones):
#         for j in range(columnas):
#             r[i][j] = m[i][j] + 2
#     return r

# print(sumar_uno(m))