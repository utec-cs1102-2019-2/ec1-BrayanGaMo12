#ifndef SESSION14A_PALO_H
#define SESSION14A_PALO_H
#include <iostream>
#include <vector>
#include "Carta.h"
using namespace std;

class Palo {
private:
    string nombre;
    string color;
    vector<Carta>cartas;
public:
    Palo();
    void mostrar(string nombre, string color);
};


#endif //SESSION14A_PALO_H
