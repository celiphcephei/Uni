// Tarea 1
// Renato Garcia Moran A01799387
// Jose Eduardo Rosas Ponciano A01784461

#include <iostream>
#include "television.hpp"
#include "tarjeta.hpp"
#include "persona.hpp"
#include "tienda.hpp"
#include "domicilio.hpp"

int main(){
    Tarjeta tarjeta1(0);
    Television tvs(500,"Elyi",2);
    Tienda guolmar("Guolmar", tvs);
    Persona juanito("Juanito", tarjeta1, tvs);
    juanito.comprarTelevision();
    guolmar.venderTelevision();
    juanito.comprarTelevision();
    guolmar.venderTelevision();
    juanito.dispDeuda();
    Domicilio casaDelJuan(tvs, juanito, guolmar);
    casaDelJuan.recibirTelevision();
    casaDelJuan.recibirTelevision();
    casaDelJuan.dispTelevisores();
    return 0;
}
