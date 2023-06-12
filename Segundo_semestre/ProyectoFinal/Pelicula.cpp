// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Pelicula.hpp"

Pelicula::Pelicula(): Video{}, director{""} {}
Pelicula::Pelicula(int iden, string nom, float dura, string gen, string dir, bool osc): Video{iden, nom, dura, gen}, director{dir}, oscar{osc} {}

void Pelicula::setDirector(string dir){director = dir;}
string Pelicula::getDirector(){return director;}

bool Pelicula::hasOscar(){return oscar;}

string Pelicula::toString(){
    string tieneOscar = "No";
    (hasOscar() ? tieneOscar = "Si" : tieneOscar = "No");
    return "Pelicula: " + getNombre() + "\nGenero: " + getGenero() +"\nDirector: " + director + "\nDuracion: " + std::to_string(getDuracion()) + "\nOscar: " + tieneOscar;
}