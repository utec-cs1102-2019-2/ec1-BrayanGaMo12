#ifndef SESSION10B_ALUMNO_H
#define SESSION10B_ALUMNO_H

#include "Persona.h"

class Alumno : Persona{
private:
    string codigo;
public:
    Alumno(string nombre, int edad, string dni, string nacionalidad, string codigo);
    void mostrarAlumno();
};


#endif //SESSION10B_ALUMNO_H
