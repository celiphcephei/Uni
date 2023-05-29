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