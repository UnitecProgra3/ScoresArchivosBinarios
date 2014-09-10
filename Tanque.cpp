#include "Tanque.h"

Tanque::Tanque(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
    this->tipo = "Tanque";
}

Tanque::~Tanque()
{
    //dtor
}

void Tanque::recibirAtaque(int ataque_recibido)
{
    this->vida-=ataque_recibido/2;
}

void Tanque::especial()
{
    cout<<"Yiiaaahhh"<<endl;
}
