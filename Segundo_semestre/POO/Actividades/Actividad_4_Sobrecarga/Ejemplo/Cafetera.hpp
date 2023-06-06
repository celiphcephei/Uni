#ifndef CAFETERA_HPP
#define CAFETERA_HPP

#include <string>

using std::string;

class Cafetera{
    float capacidad{3.0};
    int tazasXmin{1};
    string nombre = {"Indefinido"};
    public:
        Cafetera(std::string, float, int);
        string toString();
        friend int operator +(Cafetera &c1, Cafetera &c2);
        friend int operator +(int num, Cafetera &c);
        friend string operator %(Cafetera &c1, Cafetera &c2);
        friend bool operator >(Cafetera &c1, Cafetera &c2);
        friend Cafetera operator *(Cafetera &c1, Cafetera &c2);
};

#endif