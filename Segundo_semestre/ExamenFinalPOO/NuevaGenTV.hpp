// Renato Garcia Moran A01799387

#ifndef NUEVAGENTV_HPP
#define NUEVAGENTV_HPP

#include "TV.hpp"

class NuevaGenTV: public TV{
        bool holoProy;
        int generacion;
    public:
        NuevaGenTV(int);
        void setHoloProy(bool);
        bool isHoloProy();
        int getGeneracion();
        string toString();
        virtual void cambiarCanal(int);
};

#endif