# Renato Garcia Moran A01799387
# Emiliano Caballero Mendoza A01749050
# Marisol S. Ramírez Herrera A01747396
from matplotlib import pyplot as plt

file_path = "archivo.txt"
diccionario = {}
with open(file_path, "r") as file:
    file_contents = file.read().lower()
    palabras = file_contents.split()

    for palabra in palabras:
        if palabra in diccionario:
            diccionario[palabra] += 1
        else:
            diccionario[palabra] = 1

diccionario_ordenado = dict(sorted(diccionario.items(), key=lambda item: item[1], reverse=True))

palabras = list(diccionario_ordenado.keys())
frecuencias = list(diccionario_ordenado.values())

plt.figure(figsize=(10, 6))
plt.bar(palabras, frecuencias)
plt.xlabel('Palabras')
plt.ylabel('Frecuencia')
plt.title('Frecuencia de palabras')

plt.xticks(rotation=45, fontsize=8)

plt.tight_layout()
plt.show()
