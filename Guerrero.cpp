#include "Guerrero.h"

Guerrero::Guerrero(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
    this->tipo = "Guerrero";
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::especial()
{
    cout<<"Rwwawaaarar!"<<endl;
}
