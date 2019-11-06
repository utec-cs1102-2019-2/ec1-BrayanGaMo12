#ifndef TAREA_COMIDA_H
#define TAREA_COMIDA_H
#include "Estado_Animo.h"
#include <iostream>
using namespace std;
class Comida {
private:
    string alimento;
    int cant;
public:
    Comida(int cant);
    Comida(string alimento, int animo, int cant);
    void cantidad(int cant);
    int animo;


};


#endif //TAREA_COMIDA_H
