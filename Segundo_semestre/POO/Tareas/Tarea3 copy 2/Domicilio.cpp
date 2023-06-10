// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Domicilio.hpp"

Domicilio::Domicilio(): televisores{} {}

void Domicilio::recibirTV(Television* tv){
    cout << "Se recibió un televisor del tipo " << tv->getModelo() << " y la marca " << tv->getMarca() << endl;
    televisores.push_back(tv);
}

int Domicilio::getCuantasTV(){return televisores.size();}