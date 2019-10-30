#include <iostream>
#include "Tablero.h"
#include <ctime>
int main() {
    srand(time(nullptr));
    std::cout << "FxALVARO" << std::endl;
    int a,b;
    cout<<"Ingrese la fila:"; cin>>a;
    cout<<"Ingrese columna:"; cin>>b;
    Tablero *buscaminas = new Tablero(a,b);

    buscaminas->instalar_minas();
    buscaminas->mostrar();
    return 0;
}