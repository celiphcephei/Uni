#  = [i for i in range(30) if i % != i == 0]
# def alterna_chars(n):
#     string = n
#     for i in n[1::2]:
#         string = string.replace(i, "%")
#     for x in n[::2]:
#         string = string.replace(x, "#")
#     print(string)

# def alterna_chars(n):
#     char = ""
#     for i in range(n + 1):
#         if i == 0:
#             char += "#"
#         elif i == 1:
#             char += "%"
#         elif i % 2 == 0:
#             char += "#"
#         else:
#             char += "%"
#     print(char)



# alterna_chars(5)
listaB = [1, 3, 5, 7, 'Hola', 'Adiós']
x = listaB[ len(listaB) - 4 ]
print(x)