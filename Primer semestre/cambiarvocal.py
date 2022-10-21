def funcion(s):
  cadena = ""
  lista = ['a','e','i','o','u']
  contador = 0
  for i in s:
    if i in lista:
      for n in lista:
        contador += 1
        if n == i:
            if contador < len(lista):
                cadena += lista[contador + 1]
            else:
                cadena += lista[-1]
    cadena += i
  return cadena

print(funcion("Hola"))