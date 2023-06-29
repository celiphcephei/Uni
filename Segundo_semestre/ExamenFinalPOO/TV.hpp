// Renato García Morán A01799387

#ifndef TV_HPP
#define TV_HPP

#include <iostream>
#include <string>

using std::string;

class TV{
    protected:
        int canalActual{2};
        TV();
        TV(int);
    public:
        virtual void cambiarCanal(int) = 0;
        int getCanal();
        string toString();
};

#endif