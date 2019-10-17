#include <iostream>
#ifndef SESSION9B_ALUMNO_H
#define SESSION9B_ALUMNO_H
using namespace std;
class Alumno {
private:
    string nombre;
    string apellidos;
    int edad;
    int creditos;
public:
    Alumno(string nombre, string apellidos, int edad, int creditos);
    string nombre();
    string apellidos();
    int edad();
    int creditos();
    ~Alumno();
};


#endif //SESSION9B_ALUMNO_H
