#include <iostream>
#include <cmath>
using namespace std;
class Triangulo
{
private:
    float lado_1;
    float lado_2;
    float lado_3;
public:
        float semiperimetro(){
            return (lado_1+lado_2+lado_3)/2;
        }
        float area () {
            float s = semiperimetro();
            return sqrt(s * (s - lado_1) * (s - lado_2) * (s - lado_3));
        }
        float perimetro(){
            return lado_1+lado_2+lado_3;
        }
        void set_lados(float lado_1,float lado_2,float lado_3){
            lado_1=lado_1;lado_2=lado_2;lado_3=lado_3;
        }
};
int main (){
    Triangulo Bra;
    float lado1,lado2,lado3;
    cin>>lado1>>lado2>>lado3;
    Bra.set_lados(lado1,lado2,lado3);
    cout<<"El area es"<<Bra.area()<<endl;
    cout<<"El perimetro es"<<Bra.perimetro()<<endl;
    return 0;
}