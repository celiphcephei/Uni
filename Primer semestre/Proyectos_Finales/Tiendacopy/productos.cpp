#include <iostream>
#include "productos.h"


string Productos::getId(){
    return id;
}

string Productos::getDescripcion(){
    return descripcion;
}

double Productos::getPrecio(){
    return precio;
}

int Productos::getStock(){
    return stock;
}

void Productos::setId(string iden){
    id = iden;
}

void Productos::setDescripcion(string desc){
    descripcion = desc;
}

void Productos::setPrecio(double prec){
    precio = prec;
}

void Productos::setStock(int stk){
    stock = stk;
}