def run():
    while True:
        hora_de_dormir = int(input("¿A qué hora vas a dormir?\n"))
        if hora_de_dormir < 0 and hora_de_dormir > 23:
            continue
        elif hora_de_dormir == 0 or hora_de_dormir == 1:
            print("Duerme usted un poco tarde,trate de descansar más.")
            break
        elif hora_de_dormir > 1 and hora_de_dormir < 5:
            print("Usted duerme muy tarde, eso no es bueno para la salud.")
            break
        elif hora_de_dormir >= 5 and hora_de_dormir < 11:
            print("Supongo que duerme a esas horas porque tiene un trabajo nocturno.")
            break
        elif hora_de_dormir >= 11 and hora_de_dormir < 19:
            print("Usted tiene un horario de sueño muy extraño.")
            break
        elif hora_de_dormir == 19 or hora_de_dormir == 20:
            print("Usted duerme muy temprano.")
            break
        elif hora_de_dormir >= 21 and hora_de_dormir <= 23:
            print("Usted duerme a muy buena hora, felicidades.")
            break


if __name__ == "__main__":
    run()