#En un estado en particular, las tarifas de un taxi consisten en una tarifa base (banderazo) de $14.00, más la cantidad que marque el taxímetro.
#El taxímetro añade una tarifa de $2.25 por cada 100 metros recorridos exactos. Escriba un programa que pida al usuario la distancia recorrida
#en kilómetros como su único parámetro y muestre el costo del pasaje completo.
tarifa = 14
distancia = float(input("Distancia recorrida en kilometros: "))
tarifa += ((distancia * 1000 ) // 100) * 2.25
print(f"El total a pagar es de ${tarifa: .2f}")
