#include "Temporada.hpp"

Temporada::Temporada(): numero{0} {}
Temporada::Temporada(int num): numero{num} {}

void Temporada::addCapitulo(Capitulo &cap){episodios.push_back(cap);}

void Temporada::dispCapitulos(){
    for(int i = 0; i < episodios.size(); i++){
        cout << "Episodio numero " << episodios[i].getNumero() << endl
             << "\"" << episodios[i].getTitulo() << "\"" << endl
             << "Calificacion: " << episodios[i].getCalificacion() << endl << endl;
    }
}

void Temporada::setCalificacion(){
    int calPromedio{0};
    for(int i = 0; i < episodios.size(); i++){
        calPromedio = calPromedio + episodios[i];
    }
    calPromedio /= episodios.size();
    this->calificacion = calPromedio;
}

int Temporada::getCalificacion(){return calificacion;}

int Temporada::getNumCapitulos(){return episodios.size();}

int operator +(int n, Temporada& t){return n + t.calificacion;}

Capitulo Temporada::getCapitulo(int n){
    return episodios[n];
}