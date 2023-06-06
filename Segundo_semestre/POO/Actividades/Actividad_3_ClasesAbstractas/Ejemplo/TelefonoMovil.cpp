#include "TelefonoMovil.hpp"

TelefonoMovil::TelefonoMovil(): Telefono{"55 1234 4321"} {}

string TelefonoMovil::avisarBateriaBaja(){
    if(pctBateria < 15) return "Bateria baja!!! Te queda" + std::to_string(pctBateria) + "%";

}
bool TelefonoMovil::cargarBateria(){
    cout << "Cargando Bateria..." << endl;
    return true;
}

bool TelefonoMovil::comunicar(){
    encender();
    marcar("55 1284 9572");
}