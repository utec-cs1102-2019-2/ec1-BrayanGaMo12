#ifndef SESSION11A_TABLERO_H
#define SESSION11A_TABLERO_H

#include <iostream>
#include <vector>
#include "Bloque.h"
using namespace std;

class Tablero {
private:
    int filas=0;
    int columnas=0;
    int puntaje;
    vector<vector<Bloque>> bloques;
public:
    Tablero(int filas, int columnas);
    void instalar_minas();
    void mostrar();


};


#endif //SESSION11A_TABLERO_H