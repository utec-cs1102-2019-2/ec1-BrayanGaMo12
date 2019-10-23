#ifndef SESSION10A_TECLADO_H
#define SESSION10A_TECLADO_H

#include <iostream>

class Teclado {
private:
    double tamaño;
    String modelo;
    String luces;
public:
    Teclado(double tamaño, String modelo, String luces);
    String modelo, luces;
    double tamaño;
    ~Teclado();
};


#endif //SESSION10A_TECLADO_H
