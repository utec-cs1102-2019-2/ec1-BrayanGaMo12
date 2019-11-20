#include "Carta.h"
Carta::Carta() {}
void Carta::cartas() {
    for (int i=0;i<14;i++){
        numero=numero+1;
        cin>>numero;
    }
}
Carta::~Carta() {}
