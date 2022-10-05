def comprehensión_lectura():
    print("Veamos que tan buena es tu comprehensión lectora.")
    prim_lect = "Una niña desarrolla una capacidad mental extraordinaria a pesar de sus padres descuidados y de una directora abusiva"
    print("Primera lectura:\n {prim_lect}" )
    print("¿Qué le falta a la oración?\n a) punto y coma\n b) punto final y coma\n c) parentesis y coma")
    a = "punto y coma"
    b = "punto final y coma"
    c = "perentesis y coma"
    elección = input("¿Qué letra escoges?: ")
    if elección == b:
        print("Muy bien")
    else:
        print("Puedes mejorar, continua")
    return comprehensión_lectura()

def ejercicio_reescribir():
    print("Reescribe el siguiente parrafo de la manera correcta")
    parrafo = print("Don Manuel tenia un campo grande donde habia plantado un monton de arboles, la mayoria de ellos, frutales. Eran arboles hermosos grandes y llenos de las mas ricas frutas. En este campo habia ciruelos, naranjos, limoneros, arboles de mandarinas de higos y hasta nogales que son los arboles que nos dan las nueces.")

    if parrafo == "Don Manuel tenía un campo grande donde había plantado un montón de árboles, la mayoría de ellos, frutales. Eran árboles hermosos, grandes y llenos de las más ricas frutas. En este campo había ciruelos, naranjos, limoneros, árboles de mandarinas, de higos y hasta nogales que son los árboles que nos dan las nueces.":
        print("Excelente trabajo, sigue así")
    else:
        print("Puedes mejorar, no te rindas crack")
    
    print("¿Quíeres ayuda?")
    ayuda = input("Si / No")
    if ayuda == "Si":
        print("Recuerda de mantener los acentos, al igual de checar las palabras que necesiten del uso de comas")
    else:
        print("Ta bueno")

def ejercio_lectura():
    print("En este ejercicio tendrás que leer una pequeña lectura y contestar lo siguiente:")
    print("Gustavo recibió muy contento un sobre. \n-Por su peso, debe ser algo muy bueno, pensó. \nPoco despues empezo su curiosidad por abrir el sobre y revisar su contenido. \n -!Debe ser algún recibo o tal vez una invitación¡ \n -!Deberías abrirlo¡ Le dijo un amigo. \n Gustavo finalmente decidío abrirlo y sorprendido, había encontrado unos boletos que lo invitaban a un estreno de una nueva pelicula, como el ganador de un sorteo.")
    print("Ahora responde:")
    dato_1 = input("¿Quíen es el personaje principal de la historía? \nResponde:")
    dato_2 = input("¿Qué fue lo que le llego al personaje? \nResponde:")
    dato_3 = input("¿Cuál era el contenido del sobre? \nResponde:")
    dato_4 = input("¿Quíen convencio a Gustavo de abrir el sobre? \nResponde:")
    dato_5 = input("¿Qué notas que le falta al texto?, porfavor separalos con comas \nResponde:")

    if dato_1 == "Gustavo" or "gustavo":
        print("!correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_2 == "sobre" or "Sobre":
        print("!Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_3 == "Boletos" or "boletos":
        print("!Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_4 == "Un amigo" or "amigo" or "su amigo":
        print("!Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")
    
    if dato_5 == "acentos" or "Acentos":
        print("!Correcto¡")
    else:
        print("Vuelve a leer y sigue tratando")

def mainLect():
    iniciador = input("Escribe")


if __name__ == "__main__":
    mainLect()