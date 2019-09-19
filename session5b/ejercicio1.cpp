#include <iostream>
using namespace std;
int varGlobal=20;
int main(int argc, char*argv[])
{
    cout<<"EJERCICIO1 \n";
    int varLocal=10;
    int *ptrvarLocal=&varLocal;
    *ptrvarLocal=20;
    cout<<varLocal<<"\n";
    return 0;
}