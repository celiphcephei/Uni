#ifndef DOMICILIO_HPP
#define DOMICILIO_HPP

#include <iostream>
#include <vector>
#include "Television.hpp"

using std::cout;
using std::endl;
using std::vector;

class Domicilio{
    vector<Television*> televisores;
    public:
        Domicilio();
        void recibirTV(Television*);
        int getCuantasTV();
};

#endif