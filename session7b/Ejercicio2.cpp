
#include <iostream>

#include <vector>
using namespace std;
int main(){
    int N=0;
    cout<<"Ingrese la cantidad de numeros:";
    cin>>N;
    vector<int> v(N,0);
    for(int i=0; i<N;i++){
        cout<<"ingrese el elemento "<<i<<" :";
        cin>>v[i];
    }
    for(int j=N-1;j>=0;j-- ){
        cout<<v[j]<<",";
    }
}