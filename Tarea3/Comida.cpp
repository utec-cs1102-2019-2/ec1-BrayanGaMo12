#include "Comida.h"
using namespace std;
Comida::Comida(string alimento, int animo, int cant) {
    this ->alimento=alimento;
    this ->animo=animo;
    this ->cant=cant;

}
void Comida::cantidad(int cant) {
    cout<<"¿Que comera?(Abarrote, Lembas, Manzana, Melon, HoneyCake, Hongos, Cualquiercosa):"<<endl;
    for(int i=0;i<cant;i++){
        cout<<"¿Que mas comera?:"<<endl;cin>>alimento;
    }
    if (alimento=="Abarrote"){
        animo+=2;
    }
    if (alimento=="Lembas"){
        animo+=3;
    }
    if (alimento=="Manzana"){
        animo+=1;
    }
    if (alimento=="Melon"){
        animo+=1;
    }
    if (alimento=="HoneyCake"){
        animo+=5;
    }
    if (alimento=="Hongos"){
        animo-=10;
    }else{
        animo-=1;
    }
}
