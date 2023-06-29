// Renato García Morán A01799387

#include "TV.hpp"

TV::TV(): canalActual{2} {}
TV::TV(int c): canalActual{c} {}

int TV::getCanal(){return canalActual;}

string TV::toString(){
    return "TV("+ std::to_string(canalActual) + ")";
}

