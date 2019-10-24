#include "Alumno.h"
using namespace std;
Alumno::Alumno(string nombre, int edad, string dni, string nacionalidad, string codigo):Persona(nombre,edad,dni,nacionalidad){
    this->codigo=codigo;
}
void Alumno::mostrarAlumno(){
    this->mostrarPersona();
    cout<<"Cod.:\t"<<this->codigo<<endl;
}