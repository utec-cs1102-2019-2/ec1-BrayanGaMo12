#include <iostream>
using namespace std;
void tabla(int n, string cod[], string name[], int age[], char gender[]);
int main() {
    int n=0;
    cout<<"Ingrese la cantidad de alumnos: \n";
    cin>>n;
    string *cod=new string[n];
    string *name=new string[n];
    int *age=new int[n];
    char *gender=new char[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese el codigo:"<<endl;
        cin>>cod[i];
        cout<<"Ingrese el nombre:"<<endl;
        cin>>name[i];
        cout<<"Ingrese la edad:"<<endl;
        cin>>age[i];
        cout<<"Ingrese el genero([M]ale / [F]emale):"<<endl;
        cin>>gender[i];

    }
    tabla(n,cod, name, age, gender);
    return 0;
}
void tabla(int n, string cod[], string name[], int age[], char gender[]){
    cout<<"Codigo"<<"\t"<<"Nombre"<<"\t"<<"Edad"<<"\t"<<"Genero"<<endl;
    for (int i=0;i<n; i++){

        cout<<cod[i]<<"\t";
        cout<<name[i]<<"\t";
        cout<<age[i]<<"\t";
        cout<<gender[i]<<"\t";
    }
}
