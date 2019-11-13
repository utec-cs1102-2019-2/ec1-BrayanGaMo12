#ifndef SESSION13A_JUGADOR_H
#define SESSION13A_JUGADOR_H
#include <iostream>
using namespace std;

class Jugador {
private:
    int numero;
    string nombre;
public:
    Jugador();
    virtual marcar(x,y)=0;
    ~Jugador();
};


#endif //SESSION13A_JUGADOR_H
