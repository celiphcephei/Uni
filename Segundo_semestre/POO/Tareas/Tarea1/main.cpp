#include <iostream>
#include "television.hpp"
#include "tarjeta.hpp"
#include "persona.hpp"
#include "tienda.hpp"
#include "domicilio.hpp"

using std::cout;

int main(){
    Tarjeta tarjeta1(500);
    Television tvs(500,"Elyi",2);
    Persona juanito("Juanito", tarjeta1, tvs);
    Tienda guolmar("Guolmar", tvs);
    juanito.comprarTelevision();
    guolmar.venderTelevision();
    return 0;
}