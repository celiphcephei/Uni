#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Juego{
    int numJug = 0;
    protected:
        Juego(int num = 0): numJug{num} {}
    public:
        virtual string jugar(){return "Como?";}
};

class JuegoMesa: public Juego{
    public:
        JuegoMesa(int num = 0): Juego{num} {}
        virtual string jugar(){return "Mueve tu ficha";}
};

class VideoJuego: public Juego{
    public:
        VideoJuego(int num = 0): Juego{num} {}
        virtual string jugar(){return "Mueve el joystick";}
};

void jugarJuego(Juego &juego){
    cout << juego.jugar() << endl;
}

void aJugar(Juego* juego){
    cout << juego->jugar() << endl;
}

int main(){
    JuegoMesa Serpientes{3};
    VideoJuego Mario{2};
    Juego* gamePtr;
    cout << "Acceso por punteros forma ptr->jugar()" << endl;
    gamePtr = &Serpientes;
    cout << gamePtr->jugar() << endl;
    gamePtr = &Mario;
    cout << gamePtr->jugar() << endl;

    cout << "Acceso por funcion con referencia forma (Juego &juego) juego.jugar()" << endl;
    jugarJuego(Serpientes);
    jugarJuego(Mario);

    cout << "Acceso por funcion con puntero forma (Juego* juego) juego->jugar() y con arreglo de apuntadores" << endl;
    // Arreglo de apuntadores
    Juego* misJuegos[3];
    misJuegos[0] = new VideoJuego{3};
    misJuegos[1] = new JuegoMesa{2};
    misJuegos[2] = new VideoJuego{2};
    
    Juego* actual;

    for(int i = 0; i < 3; i++){
        actual = misJuegos[i];
        cout << actual->jugar() << endl;
        aJugar(actual);
    }

    return 0;
}