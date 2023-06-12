// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"
#include "Temporada.hpp"
#include <vector>

using std::vector;

class Serie: public Video{
        vector<Temporada> temporadas;
        // int calificacion;
    public:
        Serie();
        Serie(int, string, float, string);
        void addTemporada(Temporada&);
        int getNumTemp();
        void setCalificacionPromedio();
        int getCalificacion();
        string toString();
        void dispEpisodios();
        Capitulo getEpisodio(int);
};

#endif