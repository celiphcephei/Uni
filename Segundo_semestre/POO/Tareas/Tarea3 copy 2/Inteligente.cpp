// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Inteligente.hpp"

Inteligente::Inteligente(): Television{}, wifi{} {}
Inteligente::Inteligente(string marc, string model, int prec): Television{marc, model, prec}, wifi{1} {}

bool Inteligente::hasWifi(){return wifi;}

string Inteligente::toString(){
    string encendido;
    if(! isEncendido()) encendido = "apagada";
        else encendido = "prendida";
    string wf;
    if(! hasWifi()) wf = "Revisa la conexion a internet!";
        else wf = "Conexion a internet establecida";
    return "La television del tipo " + getModelo() + " y de la marca " + getMarca() + " esta " + encendido + ".\n" +
    "El volumen está establecido en: " + std::to_string(getVolumen()) + '\n' +  wf + '\n' + "Se esta reproduciendo: " + getCanal();
}

void Inteligente::prender(){
    cout << "Iniciando. . ." << endl
         << getMarca() << "/. . ./" << endl
         << "¿Que quieres ver hoy?" << endl;
    setEncendido(true);
}

void Inteligente::apagar(){
    cout << " . . ." << getModelo() << " . . . " << endl
         << "Desconectado" << endl;
    setEncendido(false);
}

void Inteligente::subirVolumen(){
    cout << "Volumen: + 10" << endl;
    masVolumen(10);
}

void Inteligente::bajarVolumen(){
    cout << "Volumen: - 10" << endl;
    menosVolumen(10);
}

void Inteligente::seleccion(int opc){
    string opcionstr;
    switch (opc){
    case 1:
        opcionstr = "Youtube";
        break;
    case 2:
        opcionstr = "Google";
        break;
    case 3:
        opcionstr = "Netflix";
        break;
    }
    cout << "Haz click para selccionar:" << endl
         << "Youtube\nGoogle\nNetflix" << endl
         << "Se ha elegido " << opcionstr << endl
         << "iniciando. . ." << opcionstr << endl;
    setCanal(opcionstr);
}

void Inteligente::funcionEspecial(){
    cout << (wifi ? "Conexion a wifi establecida" : "No hay conexion a internet") << endl;
}