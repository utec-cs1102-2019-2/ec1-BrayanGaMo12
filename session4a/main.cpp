#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    int ival=50;
    int *p=&ival;
    std:cout<<p<<*p<<&ival;
    return 0;
}