#ifndef OFICIAL_H
#define OFICIAL_H

#include <string>

using std::string;
using std::cout;
using std::endl;

class Oficial{
    private:
        int noIdentification;
        string name;
        string rango;
    public:
        Oficial();
        Oficial(int id, string nom, string ran);
        void display();
};


#endif