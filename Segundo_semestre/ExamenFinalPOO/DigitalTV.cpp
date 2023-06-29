// Renato Garcia Moran A01799387

#include "DigitalTV.hpp"

DigitalTV::DigitalTV(int cd, string m): TV{1}, canalDigital{cd}, marca{m} {}

int DigitalTV::getCanalDigital(){return canalDigital;}

string DigitalTV::getMarca(){return marca;}

string DigitalTV::toString(){
    return "DigitalTV(TV(" + std::to_string(getCanal()) + ")" + "," + std::to_string(getCanalDigital()) + "," + getMarca() + ")";
}

void DigitalTV::cambiarCanal(int nc){
    int opc;
    std::cout << "Esta es una TV digital" << std::endl
              << "Me diste un canal analogico (1) o digital (2)?" << std::endl;
    std::cin >> opc;
    (opc == 1 ? canalActual = nc : canalDigital = nc);
}