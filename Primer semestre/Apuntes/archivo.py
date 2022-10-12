for j in range(1,10):
    with open(f'archivo{j}.txt', 'w') as f:
        # f.write("Hola pampum")
        for i in range(1,20):
            f.write(f"Linea {i}\n")


with open("archivo.txt", 'r') as fi:
    print(fi.read().upper())
    #print(fi.readlines()) #Los regresa como lista