#include <iostream>
#include "Tablero.h"
#include <ctime>
int main() {
    srand(time(nullptr));
    int a,b;
    cout<<"Ingrese la fila:"; cin>>a;
    cout<<"Ingrese columna:"; cin>>b;
    Tablero *buscaminas = new Tablero(a,b);

    buscaminas->instalar_minas(a,b);
    buscaminas->mostrar();
    buscaminas->contarminas(a,b);
    return 0;
}