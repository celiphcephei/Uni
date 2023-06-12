// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include <iostream>
#include "Video.hpp"
#include "IReproductor.hpp"
#include "Temporada.hpp"
#include "Capitulo.hpp"
#include "Pelicula.hpp"
#include "Serie.hpp"
#include "Plataforma.hpp"

using std::cout;
using std::cin;
using std::endl;

int main(){
    // PRIMERA SERIE CON DOS TEMPORADAS Y TRES CAPITULOS CADA UNA
    Capitulo cap1BreiquinBah{1, "Walter descubre la pepsi", 5};
    Capitulo cap2BreiquinBah{2, "Yesi se une al negocio", 5};
    Capitulo cap3BreiquinBah{3,"Walter buscado por la mafia", 5};
    Temporada temporada1BreiquinBah{1};
    temporada1BreiquinBah.addCapitulo(cap1BreiquinBah);
    temporada1BreiquinBah.addCapitulo(cap2BreiquinBah);
    temporada1BreiquinBah.addCapitulo(cap3BreiquinBah);
    temporada1BreiquinBah.setCalificacion();
    // cout << temporada1BreiquinBah.getCalificacion() << endl;

    Capitulo cap11{4, "M3t4morf0z1s", 2};
    Capitulo cap22{5, "Yesi consigue novia", 2};
    Capitulo cap33{6,"Yesi deja de tener novia y entra en depresion", 2};
    Temporada temporada2BreiquinBah{2};

    temporada2BreiquinBah.addCapitulo(cap11);
    temporada2BreiquinBah.addCapitulo(cap22);
    temporada2BreiquinBah.addCapitulo(cap33);
    temporada2BreiquinBah.setCalificacion();
    //cout << temporada2BreiquinBah.getCalificacion() << endl;

    Serie breikinBah{1, "breikinBah", 4.24, "Accion"};
    breikinBah.addTemporada(temporada1BreiquinBah);
    breikinBah.addTemporada(temporada2BreiquinBah);
    breikinBah.setCalificacionPromedio();
    // cout << breikinBah.getCalificacion() << endl;
    // cout << breikinBah.toString() << endl;
    
    // PRIMERA PELICULA
    Pelicula rapidosYcuriosos{10, "Rapidos y curiosos", 2.2, "Accion", "Dr Pepe", false};
    /// SEGUNDA PELICULA
    Pelicula miPequeñoMorrito{11, "Mi Pequeño Morrito", 1.3, "Comedia", "Chespirito", true};
    
    // Creacion de la plataforma de videos
    Plataforma yutubChafa{};
    
    Video* videoPtr = nullptr; // creacion de puntero para guardar los videos en el sistema
    Serie* seriePtr = nullptr;
    Pelicula* peliPtr = nullptr;

    videoPtr = &rapidosYcuriosos;
    peliPtr = &rapidosYcuriosos;
    yutubChafa.addVideos(videoPtr);
    yutubChafa.addPeliculas(peliPtr);
    videoPtr = &miPequeñoMorrito;
    peliPtr = &miPequeñoMorrito;
    yutubChafa.addVideos(videoPtr);
    yutubChafa.addPeliculas(peliPtr);
    videoPtr = &breikinBah;
    seriePtr = &breikinBah;
    yutubChafa.addVideos(videoPtr);
    yutubChafa.addSeries(seriePtr);


    yutubChafa.menuPrincipal();
    return 0;
}