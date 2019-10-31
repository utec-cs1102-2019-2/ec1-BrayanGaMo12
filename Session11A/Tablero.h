#ifndef SESSION11A_TABLERO_H
#define SESSION11A_TABLERO_H

#include <iostream>
#include <vector>
#include "Bloque.h"
#include <ctime>
using namespace std;

class Tablero {
private:
    int filas=0;
    int columnas=0;
    int puntaje;
    vector<vector<Bloque>> bloques;
public:
    Tablero(int filas, int columnas);
    void instalar_minas(int filas, int columnas);
    void contarminas(int filas, int columnas);
    void mostrar();


};


#endif //SESSION11A_TABLERO_H