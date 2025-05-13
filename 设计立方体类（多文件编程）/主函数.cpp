#include <iostream>
#include "立方体属性.h"
#include "实现.cpp"
using namespace std;

int main() {
    Cube v1;
    v1.setL(10);
    v1.setH(10);
    v1.setW(10);
    cout << "立方体的面积为：" << v1.cubeS() << endl;
    cout << "立方体的体积为：" << v1.cubeV() << endl;
    Cube v2;
    v2.setL(10);
    v2.setH(10);
    v2.setW(10);
    if (v1.SV(v2)) {
        cout << "两个立方体相同" << endl;
    }
    else {
        cout << "两个立方体不相同" << endl;
    }
}