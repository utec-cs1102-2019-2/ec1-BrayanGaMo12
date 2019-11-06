#include "Estado_Animo.h"
using namespace std;
Estado_Animo::Estado_Animo(int animo) {
    this->animo=animo;

}
void Estado_Animo::mostrar() {
    if (animo < -5){
        cout<<"Enojado"<<endl;
    }
    if (animo >= -5 && animo <= 0 ){
        cout<<"Triste"<<endl;
    }
    if (animo >= 1 && animo <= 15){
        cout<<"Feliz"<<endl;
    }
    if (animo > 15){
        cout<<"JavaScript"<<endl;
    }
}
