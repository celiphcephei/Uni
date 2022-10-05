DATA = [
    {
        "name" : "Axel",
        "nick" : "Eisen",
        "age" : 47,
        "position" : "Back",
    },
    {
        "name" : "Joel",
        "nick" : "Chompene",
        "age" : 13,
        "position" : "Support",
    },
    {
        "name" : "Sergio",
        "nick" : "Negro",
        "age" : 149,
        "position" : "Misionero",
    },
]


def main():
    back_players = [players["name"] for players in DATA if players["position"] == "Back"]
    for players in back_players:
        print(players)
    supports = [player["name"] for player in DATA if player["position"] == "Support"]
    for player in supports:
        print(player)


if __name__ == "__main__":
    main()