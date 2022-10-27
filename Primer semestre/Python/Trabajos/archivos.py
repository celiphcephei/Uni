#Lista de palabras introducidas por el usario hasta que escriba fin
list = []
while True:
    word = input("Una palabra o escribe fin para terminar")
    if word == "fin":
        break
    list.append(word)

#2
with open('palabras.txt', 'w') as f:
    for palabra in list:
        f.write(palabra + '\n')

#3
del list

#4
with open('palabras.txt', 'r') as f:
    palabras = f.readlines()

#5
palabras.sort()

#6
with open('palabras.txt', 'w') as f:
    for palabra in palabras:
        f.write(palabras + '\n')

#7
del palabras

#8
with open('palabras.txt', 'a') as f:
    for i in range(3):
        p = input("Dame otra palabra: ")
        f.write( p + '\n')