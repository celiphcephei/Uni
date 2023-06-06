#include <iostream>
#include "SistemaComunicacion.hpp"
#include "Telefono.hpp"
#include "TelefonoFijo.hpp"
#include "TelefonoMovil.hpp"

using std::cout;
using std::endl;

int main(){
    TelefonoFijo telCasa{2};
    telCasa.comunicar();

    TelefonoMovil miCel{};
    miCel.cargarBateria();
    miCel.comunicar();
    return 0;
}