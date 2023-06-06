// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef CURVA_HPP
#define CURVA_HPP

#include "Television.hpp"

class Curva: public Television{
    bool curvatura;
        public:
            Curva();
            Curva(string, string, int);
            bool hasCurvature();
            virtual string toString();
};

#endif