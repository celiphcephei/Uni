# -*- coding: utf-8 -*-
"""
Created on Fri Feb 17 10:47:19 2023

@author: A01799387
"""

#Si pegaron las vacaciones


class Matriz:
    """Instancias de esta clase representan una matriz matemática
    con un cierto número de renglones y columnas.
    """
    
    def __init__(self, inicial):
        """Inicializa una instancia de esta clase con un valor inicial,
        el cual debe ser una lista de listas del mismo tamaño y que 
        contienen números que corresponden a los elementos de la matriz.
        """
        self.__info = inicial
        self.__renglones = len(inicial)
        self.__columnas = len(inicial[0])
        
    @classmethod
    def ceros(cls, renglones, columnas):
        """Método de clase que crea una nueva instancia del tamaño
        establecido por sus argumentos y que contiene solamente ceros.
        """
        return Matriz([[0 for j in range(columnas)]
                       for i in range(renglones)])
    
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
        """Propiedad que devuelve el número de renglones de esta 
        matriz.
        """
        return self.__renglones
    
    @property
    def columnas(self):
        """Propiedad que devuelve el número de columnas de esta 
        matriz.
        """
        return self.__columnas
    
    def __getitem__(self, indices):
        """Devuelve el elemento de esta matriz indicado por indices, el
        cual debe ser una tupla con el renglón y la columna deseada.
        """
        renglon, columna = indices
        return self.__info[renglon][columna]    
    
    def __setitem__(self, indices, valor):
        """Establece valor como el nuevo elemento de esta matriz en indices, 
        el cual debe ser una tupla con el renglón y la columna deseada.
        """
        renglon, columna = indices
        self.__info[renglon][columna] = valor

    def __str__(self):
        """Devuelve una cadena con la representación informal de esta 
        matriz.
        """
        nums_como_cadenas = [str(n) for n in sum(self.__info, [])]
        nums_como_cadenas.sort(key=len, reverse=True)
        tam_max = len(nums_como_cadenas[0])
        return '\n'.join([' '.join([f'{n:{tam_max}}' for n in renglon])
                         for renglon in self.__info]) + '\n'
    
    def __repr__(self):
        """Devuelve una cadena con la representación formal de esta matriz,
        usando el formato: 'Matriz(lista_de_listas)'
        """
        return f'Matriz({self.__info})'

    def __eq__(self, otro):
        """Devuelve True si esta matriz es igual a otro, elemento por 
        elemento, o False en caso contrario.
        """
        if self.renglones == otro.renglones and self.columnas == otro.columnas:
            for i in range(self.renglones):
                for j in range(self.columnas):
                    if self[i, j] != otro[i, j]:
                        return False
            return True
        else:
            return False
        
        
    def transpuesta(self):
        """Devuelve el resultado de transponer esta matriz."""
        
        
    
    def diagonal(self):
        """Devuelve un vector con la diagonal de esta matriz."""
        minimo = min(self.columnas, self.renglones)
        list = []
        for i in range minimo:
            list.append[i,i]
        return list
        
    
    def es_cuadrada(self):
        """Devuelve verdadero si la matriz es cuadrada"""
        return self.columnas == self.renglones
        
        
    def es_triangular_superior(self):
        """Devuelve verdadero si la matriz es triangular superior"""
        if self.es_cuadrada == True:
            for i in range(self.renglones):
                for j in range(self.columnas):
                    if i > j and self[i,j] == 0:
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
        """Devuele el resultado de sumar esta matriz más otro."""
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
 
    
    def menor_asociado(self, renglon, columna):
        """Regresa una nueva matriz resultante de eliminar
        el renglon y la columna."""
        #reng = self.renglones - 1
        #col = self.columnas - 1
        #matr = Matriz.ceros(reng, col)
        #for i in matr:
           # for j in 
        #return matr
    
    def determinante(self):
        """Calcula el valor del determinante de la matriz."""
        
    
    def adjunta(self):
        """Regresa la matriz adjunta."""
        
    
    def inversa(self):
        """Regresa la matriz inversa."""
        
    
    def es_simetrica(self):
        """Regresa verdadero si la matriz es simetrica."""
        
    
    def es_antisimetrica(self):
        """Regresa verdadero si la matriz es antisimetrica."""
        


A1 = Matriz([[3,-1,4,2]])
B1 = Matriz([[6,0,-1,4]])
C1 = Matriz([[-2,3,1,5]])

print("1a) A+C = ", A1+C1)
print("1b) -2B = ", B1*-2)
print("1c) C-B-2A = ", C1-B1-A1*2)

A2 = Matriz([[1,-1,2],[3,4,5],[0,1,-1]])
B2 = Matriz([[0,2,1],[3,0,5],[7,-6,0]])
C2 = Matriz([[0,0,2],[3,1,0],[0,-2,4]])

print("2a) A-2B =", A2 - B2*2, sep='\n')
print("2b) 4C-2B+3A =", C2*4-B2*2+A2*3, sep='\n')
print("2c) C-A-B =", C2-A2-B2, sep='\n')
print("2d) 3A-C =", A2*3-C2, sep='\n')

A3 = Matriz([[1],[-2],[4]])
B3 = Matriz([[0],[-3.],[-7]])
C3 = Matriz([[4],[-1],[5]])
D3 = Matriz([[6,0,-5],[6,2,7]])

print("3a) (2A).(3B) =", (A3*2).transpuesta()@(B3*3))
print("3b) (A-C).(3B-4A) =", (A3-C3).transpuesta()@(B3*3-A3*4))
print("3c) D(3A-5B+C) =", D3@(A3*3-B3*5+C3), sep='\n')

A4 = Matriz([[2,4,6],[4,5,6],[3,1,-2]])

print("4a) Inversa de A =", A4.inversa(), sep='\n')
print("4b) A^-1A =", A4.inversa()@A4, sep='\n')
print("4c) AA^-1 =", A4@A4.inversa(), sep='\n')