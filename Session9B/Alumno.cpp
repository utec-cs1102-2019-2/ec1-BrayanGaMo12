#include <iostream>
#include "Alumno.h"

void Alumno::setNombre(string name){
    this->nombre=nombre;
}
string Alumno::getAlumno(){
    return this->nombre;
}
void Alumno::setApellidos(string apellidos){
    this->apellidos=apellidos;
}
string Alumno::getApellidos(){
    return this->apellidos;
}
void Alumno::setEdad(int edad){
    this ->edad=edad;
}
int Alumno::setEdad(){
    return this->edad;
}
void Alumno::setCreditos(int creditos){
    this->creditos=creditos;
}
int Alumno::setCreditos(){
    return this->creditos;
}