#ifndef JUGADORES_H
#define JUGADORES_H
#include <string>
using std::string;

class Jugadores
{
    private:
        string color;
        int pos;
        string id;
    public:
        string getcolor();
        int getpos();
        string getid();
        void setcolor(string sc);
        void setpos(int sp);
        void setid(string si);
    
};

#endif