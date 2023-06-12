#ifndef PLATAFORMA_HPP
#define PLATAFORMA_HPP

#include <iostream>
#include <vector>
#include <string>
#include "Video.hpp"
#include "Serie.hpp"
#include "Pelicula.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Plataforma{
        int opcion;
        vector<Video*> videos;
        vector<Pelicula*> peliculas;
        vector<Serie*> series;
    public:
        Plataforma();
        void addVideos(Video*);
        void addSeries(Serie*);
        void addPeliculas(Pelicula*);
        void menuPrincipal();
        void mostrarVideos();
        void mostrarEpisodios();
        void mostrarPeliculas();
        void calificarVideo();
        void seleccionarPelicula();
        void seleccionarEpisodio();
};

#endif