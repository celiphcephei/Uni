// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "Video.hpp"

class Pelicula: public Video{
        string director;
        bool oscar;
    public:
        Pelicula();
        Pelicula(int, string, float, string, string, bool);
        void setDirector(string);
        string getDirector();
        bool hasOscar();
        string toString();
};

#endif