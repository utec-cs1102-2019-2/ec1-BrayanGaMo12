#include <iostream>
using namespace std;
int main(){
    char carac = 'p';
    int entero = 5;
    char *cara=&carac;
    char **sd=&cara;
    int *l=&entero;
    int **enter = &l;
    cout<<cara<<"\t"<<*cara<<"\t"<<&carac<<"\t"<<**sd<<"\t"<<&cara;
    cout<<entero<<"\n"<<*l<<"\t"<<&entero<<"\t"<<**enter<<"\t"<<&l;

}
