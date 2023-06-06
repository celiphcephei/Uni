#include "SistemaComunicacion.hpp"

SistemaComunicacion::SistemaComunicacion(string sc): tipoComunicacion{sc} {}

bool SistemaComunicacion::isComunicando() {return comunicando;}
void SistemaComunicacion::setComunicando(bool c) {comunicando = c;}

