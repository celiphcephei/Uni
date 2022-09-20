# cuenta_digitos(n): Escribe una función que reciba un número entero positivo y que regrese la cantidad de dígitos que tiene.
# Sugerencia: Divide el número entre 10 repetidamente hasta que el número sea menor que 1.

# def cuenta_digitos(n):
#     char = str(n)
#     total_dig = len(n)

# def fibonacci(n):
#     num1 = 0
#     num2 = 1
#     total = 0
#     print(num1)
#     print(num2)
#     for i in range(n+1):
#         total = num1 + num2
#         print(total)
#         num2 = total
#         num1 = num2



#HAY QUE APRENDER A LEER, EL TRABAJO NO ERA HACER LA SERIE DE FIBONACCI PERO AUN ASI ME SIRVIO PAR AUSR LA LISTA XD

def fibonacci(n):
    my_list = []
    num1 = 0
    num2 = 1
    for i in range(n):
        my_list.append(num1)
        num1 += num2
        my_list.append(num2)
        num2 += num1
    print(my_list)
    print(my_list[n])

# def fibonacci(n):
#     my_list = []

fibonacci(9)
