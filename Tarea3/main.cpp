#include <iostream>
#include "Comida.h"
#include "Estado_Animo.h"
using namespace std;
int main() {
    int a;
    cout<<"------Gandalf------"<<endl;
    cout<<"¿Cuantas veces comera?"<<endl; cin>>a;
    Comida *Gandalf=new Comida(a);
    Gandalf->cantidad(a);
    Estado_Animo *Gandalf1=new Estado_Animo();
    Gandalf1->mostrar();
}
