#include "Serie.hpp"

Serie::Serie(): Video{}{}
Serie::Serie(int iden, string nom, float dura, string gen): Video{iden,nom,dura,gen} {}

void Serie::addTemporada(Temporada &t){temporadas.push_back(t);}

int Serie::getNumTemp(){return temporadas.size();}

void Serie::setCalificacionPromedio(){
    int calPromedio{0};
    for(int i = 0; i < temporadas.size(); i++){
        calPromedio = calPromedio + temporadas[i];
    }
    calPromedio /= temporadas.size();
    setCalificacion(calPromedio);
}

int Serie::getCalificacion(){
    return Video::getCalificacion();
}

string Serie::toString(){
    return "Titulo: " + getNombre() + "\nTemporadas: " + std::to_string(getNumTemp()) + "\nCalificacion: " + std::to_string(Serie::getCalificacion())
    + "\nEpisodios:\n";
}

void Serie::dispEpisodios(){
    for(int i = 0; i < temporadas.size(); i++){
        temporadas[i].dispCapitulos();
    }
}

Capitulo Serie::getEpisodio(int n){return temporadas[0].getCapitulo(n);}