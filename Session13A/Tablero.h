#ifndef SESSION13A_TABLERO_H
#define SESSION13A_TABLERO_H
#include <iostream>
#include <vector>
#include "Cuadrado.h"
using namespace std;
class Tablero {
private:
    int x=3;
    int y=3;
    vector<vector<Cuadrado>>cuadrados;
public:
    Tablero(int x, int y);
    void mostrartablero();
};


#endif //SESSION13A_TABLERO_H
