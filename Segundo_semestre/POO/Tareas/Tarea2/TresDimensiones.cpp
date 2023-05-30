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