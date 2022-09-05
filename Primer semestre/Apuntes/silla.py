def total_neto(tipo_silla, num_sillas):
    """
    Calcula total de pedido a partir de tipo de sillas y numero.
    """
    if tipo_silla == "B":
        precio = 700
    elif tipo_silla == "E":
        precio = 900
    else:
        precio = 1500
    return precio * num_sillas


def descuento(tipo_cliente, total_neto):
    """Calcula la cantidad de descuento del pedido de acuerdo al tipo de cuente
    
    """
    descuento = 0
    if tipo_cliente == "F":
        descuento = 20
    else:
        if total_neto >= 20000:
            descuento = 15
        elif total_neto >= 10000:
            descuento = 10
    return total_neto * (descuento/100)

def main():
    tipo_sillas = input("Tipo de sillas: ")
    tipo_cliente = input("Tipo de cleinte: ")
    num_sillas = input("Numero de sillas: ")
    total = total_neto(tipo_sillas, num_sillas)
    print(f"Total: ${total}")
    desc = descuento(tipo_cliente, total)
    print(f"Descuento: ${desc:.2f}")
    print(f"Total a pagar ${total - desc:.2f}")

main()