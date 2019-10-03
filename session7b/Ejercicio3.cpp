#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 0;
    cout << "Ingrese #Números: \t";
    cin >> N;
    vector < int > v1(N, rand() % 31);
    for (int i = 0; i < N; i++) {
        cout <<v1[i];
    }
}