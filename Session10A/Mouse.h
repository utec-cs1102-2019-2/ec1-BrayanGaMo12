#ifndef SESSION10A_MOUSE_H
#define SESSION10A_MOUSE_H

#include <iostream>
#include <vector>


class Mouse {
private:
    vector<int>color{0,01,20};
    double tamaño;
public:
    Mouse(double tamaño, vector<int>color);
    vector<int>color;
    double tamaño;
    void getDescriptcion();
    ~Mouse();
};


#endif //SESSION10A_MOUSE_H
