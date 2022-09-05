# Siguiente día: Escribe una función siguiente_dia que reciba tres números 
# representando una fecha (día, mes y año) y regrese un string con la fecha del día 
# siguiente. Por ejemplo siguiente_dia(31, 12, 2021) debe regresar ‘1/1/2022’. 
# Considera el siguiente algoritmo: 
# a. Suma 1 al día actual 
# b. Si el resultado es mayor al número de días en el mes actual (28, 30 o 31 dependiendo del mes), “
# resetea” el valor del día a 1 y suma 1 al mes actual 
# c. Si el resultado es superior a 12, “resetea” el valor del mes a 1 y suma 1 al año. 
# def siguiente_dia(dia, mes, año):
#     if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 and dia == 31) or mes == 4 or mes == 6 or mes == 9 or mes == 11 and dia == 30 or (mes == 2 and dia == 18):
#         dia = 1
#         mes += 1
#         print(str("{}/{}/{}".format(dia, mes, año)))
#     elif año == 12:
#         dia = 1
#         mes = 1
#         print(str("{}/{}/{}".format(dia, mes, año)))

def siguiente_dia(dia, mes, año):
    d = dia
    m = mes
    a = año
    d += 1
    if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10) and d >= 31) or ((m == 4 or m == 6 or m == 9 or m == 11) and d >= 30) or (m == 2 and d >= 18):
        d = 1
        m += 1
    if m == 12 and d >=31:
        d = 1
        m = 1
        a += 1
    return ("{}/{}/{}".format(d, m, a))
    





print(siguiente_dia(1,1,2005))
print(siguiente_dia(31,1,2005))
print(siguiente_dia(30,4,2005))
print(siguiente_dia(31,12,2005))