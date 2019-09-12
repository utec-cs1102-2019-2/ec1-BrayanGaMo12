#include <iostream>
using namespace std;

void pedir_notas (float *a, float *b);
void suma (float *a, float *b);


int main(){
    float pc1=0.0;
    float bonus=0.0;


    float *ptr_pc1=&pc1;
    float *ptr_bonus=&bonus;


    pedir_notas(ptr_pc1,ptr_bonus);
    suma (ptr_pc1,ptr_bonus);

    return 0;
}


void pedir_notas(float *a, float *b){
    cin>>*a;
    cin>>*b;
}

void suma (float *a, float *b){
    cout<<*a+*b;}