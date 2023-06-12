#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <string>
#include "IReproductor.hpp"

using std::string;
using std::cout;
using std::endl;

class Video: public IReproductor{
        bool reproduciendo{false};
        int id;
        string nombre;
        float duracion;
        string genero;
        int calificacion;
    protected:
        Video();
        Video(int, string, float, string);
    public:
        void setID(int);
        int getID();

        void setNombre(string);
        string getNombre();

        void setDuracion(float);
        float getDuracion();

        void setGenero(string);
        string getGenero();

        virtual string toString() = 0;
        
        virtual void setCalificacion(int);
        virtual int getCalificacion();
        
        virtual void reproducir();
        void pausar();
        void adelantar();
        void retroceder();
        bool isReproduciendo();
};

#endif