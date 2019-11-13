#include "Tablero.h"
Tablero::Tablero(int x, int y) {
    this->x=x;
    this->y=y;
    for (int i=0; i < x; i++){
        vector<Cuadrado> x;
        for(int j=0; j < y; j++){
            Cuadrado *cuadrado=new Cuadrado();
            x.push_back(*cuadrado);
        }
        this->cuadrados.push_back(x);
    }
}
void Tablero::mostrartablero() {
    cout<<"---------TRES-EN-RAYA-----------"<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"#\t";
        }
    }
}