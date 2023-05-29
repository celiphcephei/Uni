#include "Curva.hpp"

Curva::Curva(): Television{}, curvatura{0} {}
Curva::Curva(string marc, string model, int prec): Television{marc, model, prec}, curvatura{1} {}

bool Curva::hasCurvature(){return curvatura;}

string Curva::toString(){
    string encendido;
    if(! isEncendido()) encendido = "apagada";
        else encendido = "prendida";
    string curva;
    if(! hasCurvature()) curva = "?";
        else curva = "Que bonita se ve con la pantalla curva!" ;
    return "La television del tipo " + getModelo() + " y de la marca " + getMarca() + " esta " + encendido + ".\n" +
    "El volumen está establecido en: " + std::to_string(getVolumen()) + "\nSe esta reproduciendo: " + getCanal() + '\n' + curva + "";
}