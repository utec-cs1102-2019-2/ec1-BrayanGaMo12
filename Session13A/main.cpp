#include <iostream>

#include "Tablero.h"
using namespace std;
int main() {
    cout << "Hello, World!" << std::endl;
    Tablero *tabla=new Tablero(3,3);
    tabla->mostrartablero();
    return 0;
}