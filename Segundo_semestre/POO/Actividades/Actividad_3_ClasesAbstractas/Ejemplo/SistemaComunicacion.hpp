#ifndef SIST_COM_HPP
#define SIST_COM_HPP

#include <string>

using std::string;

class SistemaComunicacion{
    private:
        bool comunicando {false};
    protected:
        string  tipoComunicacion{"Indefinido"};
        SistemaComunicacion(string);
    public:
        virtual bool comunicar() = 0;
        bool isComunicando();
        void setComunicando(bool);
};

#endif