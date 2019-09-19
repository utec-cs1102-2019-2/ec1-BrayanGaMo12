#include <iostream>
using namespace std;

int main(int argc, char*argv[])
{
    int *ptrMonton=nullptr;
    int *ptrVar=nullptr;
    int var=20;
    ptrVar=&var;
    ptrMonton=new int;
    *ptrMonton=10;
    delete ptrMonton;
    cout <<&var<<"\t"<<var<<"\t"<<ptrMonton<<"\t"<<*ptrMonton<<"\t"<<endl;
    cout << "EJERCICIO2 \n";
    return 0;
}
