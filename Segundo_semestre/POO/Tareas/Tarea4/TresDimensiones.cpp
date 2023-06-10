// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "TresDimensiones.hpp"

TresDimensiones::TresDimensiones(): Television{}, tresDim{1} {}
TresDimensiones::TresDimensiones(string marc, string model, int prec): Television{marc, model, prec}, tresDim{1} {}

bool TresDimensiones::tresDimOn(){return tresDim;}

string TresDimensiones::toString(){
    string encendido;
    if(! isEncendido()) encendido = "apagada";
        else encendido = "prendida";
    string tresde;
    if(! tresDimOn()) tresde = "Vista en 3D desactivada";
        else tresde = "Vista en 3D activada" ;
    return "La television del tipo " + getModelo() + " y de la marca " + getMarca() + " esta " + encendido + ".\n" +
    "El volumen está establecido en: " + std::to_string(getVolumen()) + "\nSe esta reproduciendo: " + getCanal() + '\n' + tresde;
}

void TresDimensiones::prender(){
    cout << "Bienvenido" << endl
         << "------" << getMarca() << endl
         << "Utiliza el control remoto" << endl;
    setEncendido(true);
}

void TresDimensiones::apagar(){
    cout << "Desconectado" << endl
         << "***" << getMarca() << "***" << endl;
    setEncendido(false);
}

void TresDimensiones::subirVolumen(){
    cout << "Se subieron 10 unidades de volumen" << endl;
    masVolumen(10);
}

void TresDimensiones::bajarVolumen(){
    cout << "Volumen bajaron 10 unidades de volumen" << endl;
    menosVolumen(10);
}

void TresDimensiones::seleccion(int opc){
    string opcionstr;
    switch (opc){
    case 1:
        opcionstr = "Peliculas";
        break;
    case 2:
        opcionstr = "Series";
        break;
    case 3:
        opcionstr = "Caritucaturas";
        break;
    }
    cout << "Elige que quieres ver:" << endl
         << "Peliculas\nSeries\nCaricaturas" << endl
         << "Se ha elegido " << opcionstr << endl
         << opcionstr << " en reproduccion." << endl;
    setCanal(opcionstr);
}

void TresDimensiones::funcionEspecial(){
    cout << (tresDim ? "El 3D esta activado" : "El 3D esta desactivado") << endl;
}