def cowboys(a, b, c):
    a *= 1050
    b *= 750
    c *= 450
    pTotal = a + b + c
    return pTotal
    
def main():
    a = int(input("Cuántos boletos para la clase A: "))
    b = int(input("Cuántos boletos para la clase B: "))
    c = int(input("Cuántos boletos para la clase C: "))
    nBoletos = a + b + c
    print(f"El total a pagar por {nBoletos} boletos es ${cowboys(a, b, c)}")

main()