#include "Video.hpp"

Video::Video(): id{0}, nombre{""}, duracion{0.0f}, genero{""}, reproduciendo{false}{}
Video::Video(int iden, string nom, float dura, string gen): id{iden}, nombre{nom}, duracion{dura}, genero{gen}, reproduciendo{false}{}


int Video::getID(){return id;}
void Video::setID(int iden){id = iden;}

void Video::setNombre(string nom){nombre = nom;}
string Video::getNombre(){return nombre;}

void Video::setDuracion(float dura){duracion = dura;}
float Video::getDuracion(){return duracion;}

void Video::setGenero(string gen){genero = gen;}
string Video::getGenero(){return genero;}

void Video::setCalificacion(int cal){calificacion = cal;}
int Video::getCalificacion(){return calificacion;}

void Video::reproducir(){reproduciendo = true;}
void Video::pausar(){reproduciendo = false;}
void Video::adelantar(){isReproduciendo() ? cout << "Primero comienza a reproducir" << endl : cout << "Adelantando 5 segundos" << endl;}
void Video::retroceder(){isReproduciendo()? cout << "Primero comienza a reproducir" << endl :cout << "Retrocediendo 5 segundos" << endl;}
bool Video::isReproduciendo(){return reproduciendo;}