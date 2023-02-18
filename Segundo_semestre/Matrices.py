class Matriz:
    """Instancias de esta clase representan una
    matriz matemáticas de dimensiones renglones
    x columnas."""
    #Metodos
    def __init__(self, inicial):
        """Inicializa una instancia de esta clase
        con un valor inicial, dicho valor debe ser
        una lista de listasa, todas de la misma dimension."""
        #Poner __ dos guines bajo hace que sean atributos privados
        self.__info = inicial
        self.__renglones = len(inicial)
        self.__columnas = len(inicial[0])
    
    @classmethod
    #Decorador para poder hacer MAtriz.ceros(2,3)
    def ceros(cls, renglones, columnas):
        """Metodo que regresa una nueva instancia de una matriz
        nula de dimensiones renglones x columnas"""
        # lista = []
        # for i in range(renglones):
        #     r = []
        #     for j in range(columnas):
        #         r.append(0)
        #     lista.append(r)
        return Matriz([[0 for i in range(columnas)]
                       for j in range(renglones)])
    
    @classmethod
    def identidad(clc, dimension):
        """Metodo que refresa una nueva instancia de una matriz
        identidad de tamaño dimension x dimension"""
        identidad = Matriz.ceros(dimension, dimension)
        for i in range(dimension):
            identidad.__info[i,i] = 1
        return identidad

    @property
    def renglones(self):
        return self.__renglones
    
    @property
    def columnas(self):
        return self.__columnas

    def __getitem__(self, indices):
        renglon, columna = indices
        return self.__info[renglon][columna]

    def __setitem__(self,indices, valor):
        renglon, columna = indices
        self.__info[renglon][columna] = valor


    def __repr__(self):
        """Devuelve la cadena representacion de una instancia
        de la clase Matriz"""
        return f'Matriz({self.__info})'

    # m = Matriz.ceros(2,3)
    # m

    def __str__(self):
        nums_como_cadenas = [str(n) for n in sum(self.__info, [])]
        nums_como_cadenas.sort(key=len, reverse=True)
        tam_max = len(nums_como_cadenas[0])
        return '\n'.join([' '.join([f'{n:{tam_max}}' for n in renglon])
            for renglon in self.__info]) + '\n'

    def __eq__(self, otro):
        if self.__renglones == otro.renglones and self.__columnas == otro.columnas:
            for i in range(self.renglones):
                for j in range(self.columnas):
                    if self[i, j] != otro [i, j]:
                        return False
            return True
        else:
            return False


def __add__(self, otro):
    if self.renglones == otro.renglones and self.columnas == otro.columnas:
        suma = Matriz.ceros(self.renglones, self.columnas)
        for i in range(suma.renglones):
            for j in range(suma.columnas):
                suma[i, j] = self[i,j] + otro[i,j]
        return suma

# i1 = Matriz.identidad(3)
# i2 = Matriz.identidad(3)
# i1 + i2
# Matriz([[2,0,0],[0,2,0],[0,0,2]])
