#ifndef TELMOVIL_HPP
#define TELMOVIL_HPP

#include "Telefono.hpp"

class TelefonoMovil: public Telefono{
        int pctBateria{46};
    public:
        TelefonoMovil();
        string avisarBateriaBaja();
        bool cargarBateria();
        bool comunicar();
};

#endif