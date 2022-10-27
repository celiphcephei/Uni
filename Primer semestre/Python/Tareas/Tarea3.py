# Año bisiesto: El siguiente algoritmo se puede usar para determinar si un año es 
# bisiesto: 
# • Los años bisiestos son cualquier año que es divisible por 4 (como 2012, 2016, 
# etc). 
# • Excepto si puede dividirse por 100, entonces no lo es (como 2100, 2200, etc). 
# • A menos que pueda ser divisible por 400, como 2000, 2400. 
# Escribe una función llamada es_bisiesto que reciba un año y regrese si es bisiesto 
# o no (valor booleano True o False).

def es_biciesto(año):
  if (año % 100 == 0) and (año % 400 != 0):
      return False
  elif (año % 100 == 0) and (año % 400 == 0):
    return True
  elif año % 4 == 0:
    return True
  else:
    return False




def run():
    año = int(input("Introduce un año: "))
    if es_biciesto(año):
        print("si")
    else:
        print("no")


if __name__ == "__main__":
    run()