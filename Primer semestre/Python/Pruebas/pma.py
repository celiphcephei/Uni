def inserta(lista, elem, pos):
	list = []
	count = 0
	for i in lista:
		if count == pos:
			list.append(elem)
		count += 1
		list.append(i)
	return list

print(inserta([0,1,2,3,4,5], "Aqui", 1))