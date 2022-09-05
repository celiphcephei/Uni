def tarifa_estacionamiento(h, m):
    tarifa = 0
    fracciones = 0
    if h >= 2:
        tarifa = 12 * h
    elif h == 1:
        tarifa = 12
    else:
        tarifa = 0
    if m >= 1:
        if m < 16:
            fracciones += 5
        elif m < 31:
            fracciones += 8
        elif m < 46:
            fracciones += 10
        elif m < 61:
            fracciones += 12

    total = tarifa + fracciones
    return total


print(tarifa_estacionamiento(0,50))
print(tarifa_estacionamiento(2,31))
print(tarifa_estacionamiento(4,10))
print(tarifa_estacionamiento(5,47))