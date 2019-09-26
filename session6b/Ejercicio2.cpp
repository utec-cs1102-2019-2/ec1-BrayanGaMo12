#include <iostream>
#include <cstdlib>
using namespace std;
int promedio(int n, int notas[]);
int mayor(int n, int notas[]);
void imprimir_notas(int n, int notas[], int prom);
int main(){
    int n=0;
    do{
        cout<<"Ingrese la cantidad de alumnos:";
        cin>>n;
    }while (n>=99);
    int *notas=new int[n];
    for(int i=0;i<n;i++){
        notas[i]=rand()%21;
    }
    int prom=promedio(n, notas);
    cout<<"El promedio:"<<prom<<endl;
    cout<<"La mayor nota:"<<mayor(n, notas)<<endl;
    imprimir_notas(n, notas, prom);
    delete []notas;
    notas=nullptr;
    return 0;
}
int promedio(int n, int notas[]){
    int suma=0;
    for(int i=0; i<n;i++){
        suma=suma+notas[i];
    }
    return suma/n;
}
int mayor(int n, int notas[]){
    int mayor=0;
    for (int i=0;i<n;i++){
        if (notas[i]>mayor){
            mayor=notas[i];
        }
    }
    return mayor;
}
void imprimir_notas(int n, int notas[], int prom) {
    for (int i=0; i < n;i++){
        if (notas[i]>prom){
            cout<<notas[i];
        }
    }
}