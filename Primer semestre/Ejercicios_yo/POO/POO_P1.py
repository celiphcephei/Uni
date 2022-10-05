class Dog:
    def __init__(self, name, color, age):
        self.name = name
        self.color = color
        self.age = age
    

Golden = Dog("Wawa", "Yellow", 1)

print("{0} is {1} years old and is {2}".format(Golden.name, Golden.age, Golden.color))

