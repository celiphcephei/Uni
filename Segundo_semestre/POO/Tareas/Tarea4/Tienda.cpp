// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Tienda.hpp"

Tienda::Tienda(): nombre{""}, stock{}, cliente{} {}
Tienda::Tienda(string nom, Cliente client): nombre{nom}, stock{}, cliente{client} {}

void Tienda::setNombre(string nom){nombre = nom;}
string Tienda::getNombre(){return nombre;}

void Tienda::aumentarStock(Television* tv){stock.push_back(tv);}
int Tienda::getStock(){return stock.size();}
void Tienda::venderTelevision(){
    cout << "La tienda " << nombre << " vendió el televisor " << stock.back()->getModelo() << " de la marca " << stock.back()->getMarca() << " a " << cliente.getNombre() << endl;
    cliente.pagar(stock.back()->getPrecio());
    cout << cliente.toString() << endl;
    stock.pop_back();
    cout << "Televisores en stock: " << getStock() << endl;
}

string Tienda::getRecibo(Television &tv1, Television &tv2){
    return "Tienda: " + nombre + "\n" + "Comprador: " + cliente.getNombre() + "\n" + (tv1 + tv2);
}