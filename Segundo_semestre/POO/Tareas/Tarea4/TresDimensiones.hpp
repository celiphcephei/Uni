// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef TRESDIMENSIONES_HPP
#define TRESDIMENSIONES_HPP

#include "Television.hpp"

class TresDimensiones: public Television{
    bool tresDim;
        public:
            TresDimensiones();
            TresDimensiones(string, string, int);
            bool tresDimOn();
            virtual string toString();
            virtual void prender();
            virtual void apagar();
            virtual void subirVolumen();
            virtual void bajarVolumen();
            virtual void seleccion(int);
            virtual void funcionEspecial();
};

#endif