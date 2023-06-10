// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Curva.hpp"

Curva::Curva(): Television{}, curvatura{0} {}
Curva::Curva(string marc, string model, int prec, float pes): Television{marc, model, prec, pes}, curvatura{1} {}

bool Curva::hasCurvature(){return curvatura;}

string Curva::toString(){
    string encendido;
    if(! isEncendido()) encendido = "apagada";
        else encendido = "prendida";
    string curva;
    if(! hasCurvature()) curva = "?";
        else curva = "Que bonita se ve con la pantalla curva!" ;
    return "La television del tipo " + getModelo() + " y de la marca " + getMarca() + " esta " + encendido + ".\n" +
    "El volumen está establecido en: " + std::to_string(getVolumen()) + "\nSe esta reproduciendo: " + getCanal() + '\n' + curva;
}

void Curva::prender(){
    cout << "Encendiendo el televisor " <<  getModelo() << endl
         << "Gracias por disfrutar de " << getMarca() << endl
         << "Seleciona un canal..." << endl;
    setEncendido(true);
}

void Curva::apagar(){
    cout << "Apagando..." << endl
         << "--" << getMarca() << "--" << endl;
    setEncendido(false);
}

void Curva::subirVolumen(){
    cout << "Volumen incrementado en 10%" << endl;
    masVolumen(10);
}

void Curva::bajarVolumen(){
    cout << "Volumen disminuido en 10%" << endl;
    menosVolumen(10);
}

void Curva::seleccion(int opc){
    string opcionstr;
    switch (opc){
    case 1:
        opcionstr = "Canal 1";
        break;
    case 2:
        opcionstr = "Canal 2";
        break;
    case 3:
        opcionstr = "Canal 3";
        break;
    }
    cout << "Elige un canal:" << endl
         << "Canal 1\nCanal 2\nCanal 3" << endl
         << "Se ha elegido la opcion " << opcionstr << endl
         << "Reproduciendo " << opcionstr << endl;
    setCanal(opcionstr);
}

void Curva::funcionEspecial(){
    cout << (curvatura ? "La TV tiene una curvatura" : "La TV se rompio") << endl;
}