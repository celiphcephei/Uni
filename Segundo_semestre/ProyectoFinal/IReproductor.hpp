// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef IREPRODUCTOR_HPP
#define IREPRODUCTOR_HPP

class IReproductor{
    public:
        virtual void reproducir() = 0;
        virtual void pausar() = 0;
        virtual void adelantar() = 0;
        virtual void retroceder() = 0;
        virtual bool isReproduciendo() = 0;
};

#endif