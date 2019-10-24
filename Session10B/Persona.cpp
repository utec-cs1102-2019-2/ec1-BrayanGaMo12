#include "Persona.h"
#include <iostream>
using namespace std;
string Persona::getNombre(){
    return this->Nombre;
}
Persona::Persona(string nombre, int edad, string dni, string nacionalidad){
    this->Nombre=nombre;
    this->edad=edad;
    this->dni=dni;
    this->nacionalidad=nacionalidad;
}
void Persona::mostrarPersona(){
    cout<<"------------PERSONA-----------"<<endl;
    cout<<"Nombre:\t"<<this->Nombre<<endl;
    cout<<"Edad:\t"<<this->edad<<endl;
    cout<<"DNI:\t"<<this->dni<<endl;
    cout<<"Nac.:\t"<<this->nacionalidad<<endl;
}