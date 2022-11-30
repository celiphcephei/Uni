#ifndef NAVIO_H
#define NAVIO_H

#include <string>

using std::cout;
using std::endl;
using std::string;

class Navio{
    private:
        string idNavio;
        string nombre;
        double poderFuego;
    public:
        Navio(string nom, string id, double poder);
        double getPoderfuego();
        void display();
};

#endif