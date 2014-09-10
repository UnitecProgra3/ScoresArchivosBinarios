#ifndef TANQUE_H
#define TANQUE_H

#include "Personaje.h"

class Tanque : public Personaje
{
    public:
        Tanque(int ataque, int vida);
        void recibirAtaque(int ataque_recibido);
        void especial();
        virtual ~Tanque();
    protected:
    private:
};

#endif // TANQUE_H
