#include <iostream>
#include "Persona.h"
#include "Alumno.h"
using namespace std;
int main() {
    Persona *juanito=new Persona("Juanito",18,"123123123","Peruano");
    juanito->mostrarPersona();
    Alumno *alvaro=new Alumno("Alvaro", 19, "123123123","MONGOL","78945");
    alvaro->mostrarAlumno();
    return 0;
}