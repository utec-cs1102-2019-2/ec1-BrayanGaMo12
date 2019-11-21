
#include <iostream>
#include "Juego.h"
using namespace std;
int main() {

    Juego *juego = new Juego();
    juego->start();
    juego->mostrar();

    return 0;
}