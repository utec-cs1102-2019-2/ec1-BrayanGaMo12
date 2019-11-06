#include "Bote.h"
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
void Bote::avanzar() {
    Vehiculo::avanzar();
    posX = posX + velocidadActual;
    posY = posY + velocidadActual;
    cout<<"Bote avanza"<<endl;
}

void Bote::retroceder() {
    posX = posX - velocidadActual;
    posY = posY - velocidadActual;
    cout<<"Bote retocede"<<endl;
}
Bote::Bote(){
    posX = 0;
    posY = 0;
    srand(time(nullptr));
    velocidadMinima = 0;
    velocidadMaxima = 200;
    velocidadActual = velocidadMinima + (rand() % ( velocidadMaxima - velocidadMinima + 1 ) );
}
