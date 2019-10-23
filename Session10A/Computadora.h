#ifndef SESSION10A_COMPUTADORA_H
#define SESSION10A_COMPUTADORA_H
#include <iostream>
using namespace std;

class Computadora {
private:
    Teclado *teclado=new Teclado();
    Mouse *mouse=new Mouse();

public:
    void mostar();

};



#endif //SESSION10A_COMPUTADORA_H
