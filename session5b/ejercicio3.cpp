#include <iostream>
using namespace std;

int main(){
    double *num1=nullptr;
    double *num2=nullptr;
    num1=new double;
    num2=new double;
    cout<<"Numero 1:";
    cin>>*num1;
    cout<<"Numero 2:";
    cin>>*num2;
    cout<<"La suma es:"<<*num1+*num2<<"\n";
    cout<<"La diferencia es:"<<*num1-*num2<<"\n";
    cout<<"El producto es:"<<*num1* *num2<<"\n";
    delete num1;
    delete num2;
    num1=nullptr;
    num2=nullptr;
    return 0;
}