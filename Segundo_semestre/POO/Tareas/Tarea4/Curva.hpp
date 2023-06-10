// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef CURVA_HPP
#define CURVA_HPP

#include "Television.hpp"

class Curva: public Television{
    bool curvatura;
        public:
            Curva();
            Curva(string, string, int, float);
            bool hasCurvature();
            virtual string toString();
            virtual void prender();
            virtual void apagar();
            virtual void subirVolumen();
            virtual void bajarVolumen();
            virtual void seleccion(int);
            virtual void funcionEspecial();
};

#endif