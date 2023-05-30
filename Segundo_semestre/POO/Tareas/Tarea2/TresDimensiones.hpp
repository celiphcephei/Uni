#ifndef TRESDIMENSIONES_HPP
#define TRESDIMENSIONES_HPP

#include "Television.hpp"

class TresDimensiones: public Television{
    bool tresDim;
        public:
            TresDimensiones();
            TresDimensiones(string, string, int);
            bool tresDimOn();
            string toString();
};

#endif