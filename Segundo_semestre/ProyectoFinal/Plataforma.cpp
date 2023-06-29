// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Plataforma.hpp"

Plataforma::Plataforma(): opcion{0} {
    
}

void Plataforma::menuPrincipal(){
    int opc;
    while(true){
        cout << "1. Mostrar Videos" << endl
            << "2. Mostrar Episodios" << endl
            << "3. Mostrar peliculas" << endl
            << "4. Calificar video" << endl
            << "0. salir" << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            mostrarVideos();
            break;
        case 2:
            mostrarEpisodios();
            break;
        case 3:
            mostrarPeliculas();
            break;
        case 4:
            calificarVideo();
            break;
        case 0:
            return;
            break;
        default:
            cout << "Solo puedes elegir opciones del 0 al 4" << endl;
            menuPrincipal();
            break;
        }
    }
}

void Plataforma::addVideos(Video* vid){videos.push_back(vid);}
void Plataforma::addSeries(Serie* ser){series.push_back(ser);}
void Plataforma::addPeliculas(Pelicula* peli){peliculas.push_back(peli);}

void Plataforma::mostrarVideos(){
    Video* videoActual = nullptr;
    for(int i = 0; i < videos.size(); i++){
        videoActual = videos[i];
        cout << videoActual->toString() << endl << endl;
    }
    series[0]->dispEpisodios();
}

void Plataforma::mostrarEpisodios(){
    Serie* capActual = nullptr;
    for(int i = 0; i < series.size(); i++){
        capActual = series[i];
        capActual->dispEpisodios();
        cout << endl << endl;
    }
}

void Plataforma::mostrarPeliculas(){
    Pelicula* peliActual = nullptr;
    for(int i = 0; i < peliculas.size(); i++){
        peliActual = peliculas[i];
        cout << peliActual->toString() << endl << endl;
    }
}

void Plataforma::calificarVideo(){
    int opc;
    cout << "Selecciona que quieres calificar" << endl
         << "1. Episodio" << endl
         << "2. Pelicula" << endl
         << "0. Salir" << endl;
    cin >> opc;
    switch (opc)
    {
    case 1:
        seleccionarEpisodio();
        break;
    case 2:
        seleccionarPelicula();
        break;
    default:
        return;
        break;
    }
    
}

void Plataforma::seleccionarEpisodio(){
    int opc;
    int cal;
    cout << "\nSELECCIONA UN EPISODIO" << endl;
    series[0]->dispEpisodios();
    cin >> opc;
    Capitulo ep = series[0]->getEpisodio(opc);
    cout << "Elige una calificacion del 1 al 5" << endl;
    cin >> cal;
    ep.setCalificacion(cal);
}

void Plataforma::seleccionarPelicula(){
    int opc;
    int cal;
    cout << "\nSELECCIONA UNA PELICULA" << endl;
    for(int i = 0; i < peliculas.size(); i++){
        cout << peliculas[i]->toString() << endl << endl;
    }
    cin >> opc;
    cout << "Elige una calificacion del 1 al 5" << endl;
    cin >> cal;
    opc--;
    peliculas[opc]->setCalificacion(cal);
}
