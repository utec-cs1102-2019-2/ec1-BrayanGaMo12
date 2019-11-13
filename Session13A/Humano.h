#ifndef SESSION13A_HUMANO_H
#define SESSION13A_HUMANO_H

#include "Jugador.h"
#include <iostream>
using namespace std;

class Humano : public  Jugador{
public:
    Humano();
    void marcar(x,y) override;
};


#endif //SESSION13A_HUMANO_H
