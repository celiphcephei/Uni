def cadenita_p(n):
    for i in range(1, n):
        print(i, end = ",")
    for i in range(n, 0, -1):
        if i == 1:
            e = "\n"
        else:
            e = ","
        print(i, end = e)


def cadenita_s(n):
    cadena = ""
    for i in range(1, n):
        # print(i, end = ",")
        cadena += str(i) + ","
    for i in range(n, 0, -1):
        if i == 1:
            e = ""
        else:
            e = ","
        #print(i, end = e)
        cadena += str(i) + e
    return cadena

s = cadenita_s(5)
print(s)