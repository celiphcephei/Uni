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
    #Decorador para poder hacer Matriz.ceros(2,3)
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
    def identidad(cls, dimension):
        """Metodo de clase que crea una nueva matriz identidad de la
        dimension especificada."""
        identidad = Matriz.ceros(dimension, dimension)
        for i in range(dimension):
            identidad[i, i] = 1
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


    
    
    def es_cuadrada(self):
        """Devuelve verdadero si la matriz es cuadrada"""
        return self.columnas == self.renglones


    def es_triangular_superior(self):
        """Devuelve verdadero si la matriz es triangular superior"""
        ceros = 0
        #No esta hecho para matrices de 2x2 XD
        if self.es_cuadrada() == True:
            for i in range(self.renglones):
                for j in range(self.columnas):
                    if i > j:
                        if self[i,j] == 0:
                            ceros += 1
                            if ceros > 2:
                                return True
        else:
            return False
        
    def es_triangular_inferior(self):
        """Devuelve verdadero si la matriz es triangular inferior"""
        ceros = 0
        #No esta hecho para matrices de 2x2 XD
        if self.es_cuadrada() == True:
            for i in range(self.renglones):
                for j in range(self.columnas):
                    if i < j:
                        if self[i,j] == 0:
                            ceros += 1
                            if ceros > 2:
                                return True
        else:
            return False
        
    def __mul__(self, escalar):
        """Devuelve el resultado de multiplicar cada elemento de esta 
        matriz por escalar.
        """
        resultado = Matriz.ceros(self.renglones, self.columnas)
        for i in range(resultado.renglones):
            for j in range(resultado.columnas):
                resultado[i,j] = self[i,j] * escalar
        return resultado
    
    def __truediv__(self, escalar):
        """Devuelve el resultado de dividir cada elemento de esta
        matriz entre escalar."""
        resultado = Matriz.ceros(self.renglones, self.columnas)
        for i in range(resultado.renglones):
            for j in range(resultado.columnas):
                resultado[i,j] = self[i,j] / escalar
        return resultado
    
    def __neg__(self):
        """Devuelve el resultado de cambiar de signo cada elemento de
        esta matriz.
        """
        resultado = Matriz.ceros(self.renglones, self.columnas)
        for i in range(resultado.renglones):
            for j in range(resultado.columnas):
                resultado[i,j] = self[i,j] * -1
        return resultado
    
    
    def __add__(self, otro):
        if self.renglones == otro.renglones and self.columnas == otro.columnas:
            suma = Matriz.ceros(self.renglones, self.columnas)
            for i in range(suma.renglones):
                for j in range(suma.columnas):
                    suma[i, j] = self[i,j] + otro[i,j]
            return suma
    
    def __sub__(self, otro):
        """Devuele el resultado de restar esta matriz menos otro."""
        if self.renglones == otro.renglones and self.columnas == otro.columnas:
            resta = Matriz.ceros(self.renglones, self.columnas)
            for i in range(resta.renglones):
                for j in range(resta.columnas):
                    resta[i,j] = self[i,j] - otro[i,j]
            return resta
    
    
    def __matmul__(self, otro):
        """Devuele el resultado del producto de esta matriz multiplicada
        por otro."""
        mult = Matriz.ceros(self.renglones, otro.columnas)
        for i in range(self.renglones):
            for j in range(otro.columnas):
                for k in range(otro.renglones):
                    mult[i][j] += self[i][k] * otro[k][j]
        return mult

#m = [[1,2,3],[4,5,6],[7,8,9],[0,1,2]]
#m2 = [[1,2],[-6,0],[4,-1]]
        
#[[1,2,3],[4,5,6],[7,8,9]]

# i1 = Matriz.identidad(3)
# i2 = Matriz.identidad(3)
# i1 + i2
# Matriz([[2,0,0],[0,2,0],[0,0,2]])
    def menor_asociado(self, renglon, columna):
        """Regresa una nueva matriz resultante de eliminar
        el renglon y la columna."""
        #reng = self.renglones - 1
        #col = self.columnas - 1
        #matr = Matriz.ceros(reng, col)
        #for i in matr:
           # for j in 
        #return matr
                    
    def diagonal(self):
        """Devuelve un vector con la diagonal de esta matriz."""
        minimo = min(self.columnas, self.renglones)
        list = []
        for i in range(minimo):
            list.append[i,i]
        return list