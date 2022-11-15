#ifndef RECTANGULO_H
#define RECTANGULO_H


class Rectangulo{
    private:
        int ancho;
        int alto;
    public:
        int getAncho();
        int getAlto();
        void setAlto(int altura);
        void setAncho(int anchura);
        int getPerimetro();
        int getArea();
        int dibuja();
};
#endif