#include "Arquero.h"

Arquero::Arquero(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
}

Arquero::~Arquero()
{
    //dtor
}

void Arquero::especial()
{
    cout<<"hyyaaah!"<<endl;
}
