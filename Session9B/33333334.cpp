#include <iostream>
#include "Alumno.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    Alumno *venero=new Alumno();
    Alumno *alvaro=new Alumno();
    string nombre;
    cin>>nombre;
    venero->setNombre(nombre: "Sergio");
    venero->setApellidos(apellidos: "Venero");
    venero->setCreditos(creditos:21);
    venero->setEdad(edad:22);

    alvaro->setNombre(nombre:"Alvaro");
    alvaro->setApellido(apellido:"Garcia");
    alvaro->setCreditos(creditos: 20);
    alvaro->setEdad(edad:18);.0

    venero

    return 0;
}