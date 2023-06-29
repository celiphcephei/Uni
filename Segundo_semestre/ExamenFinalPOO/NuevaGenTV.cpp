// Renato Garcia Moran A01799387

#include "NuevaGenTV.hpp"

NuevaGenTV::NuevaGenTV(int gen): TV{77}, generacion{gen} {}

void NuevaGenTV::setHoloProy(bool v){holoProy = v;}

bool NuevaGenTV::isHoloProy(){return holoProy;}

int NuevaGenTV::getGeneracion(){return generacion;}

string NuevaGenTV::toString(){
    return "NuevaGenTV(TV(" + std::to_string(getCanal()) + ")" + "," + std::to_string(isHoloProy()) + "," + std::to_string(getGeneracion()) + ")";
}

void NuevaGenTV::cambiarCanal(int nc){
    string opc;
    std::cout << "Esta es una TV de nueva generacion, no usa canales!!!" << std::endl;
    isHoloProy() ? opc = "Encendiendo la Holo Proyeccion..." : opc = "Encender la Holo proyeccion." ;
    std::cout << opc << std::endl;
}