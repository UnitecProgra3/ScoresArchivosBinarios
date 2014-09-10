#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
using namespace std;

class Personaje
{
public:
    int ataque;
    int vida;
    string tipo;

    Personaje();
    Personaje(int ataque,int vida);
    void recibirAtaque(int ataque_recibido);
    virtual void especial() = 0;
};

#endif
