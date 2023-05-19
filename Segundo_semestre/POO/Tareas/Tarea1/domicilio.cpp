#include "domicilio.hpp"

Domicilio::Domicilio(): television{}, dueño{}, vendedor{} {}
Domicilio::Domicilio(Television tv,Persona du, Tienda vend): television{tv}, dueño{du}, vendedor{vend} {}

void Domicilio::recibirTelevision(){
    cout << "Se recibió un Televisor de " << vendedor.getNombre() << " al domicilio de " << dueño.getNombre() << endl;
}

void Domicilio::dispTelevisores(){
    cout << "Hay un total de " << vendedor.getVentas() << " televisor(es) en el domicilio de " << dueño.getNombre() << endl;
}