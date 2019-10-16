#include "Cilindro.h"
#include <cmath.h>
cilindro::cilindro(float radio, float altura){
    this->altura=altura;
    this->radio=radio;
}
float cilindro::volumen(){
    return M_pi*(radio*radio)*altura;
}
float cilindro::areatotal(){
    return 2*M_pi*(radio*radio)+2*M_pi*radio*altura;
}
float cilindro::arealateral(){
    return 2*M_pi*radio*altura
}
cilindro::
