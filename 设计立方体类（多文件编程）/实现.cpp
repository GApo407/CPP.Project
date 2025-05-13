#include <iostream>
#include "立方体属性.h"
using namespace std;


void Cube::setL(int a) {
    m_l = a;
}

void Cube::setH(int b) {
    m_h = b;
}

void Cube::setW(int c) {
    m_w = c;
}

int Cube::cubeS()  {
    return m_l * m_w * 2 + m_w * m_h * 2 + m_l * m_h * 2;
}

int Cube::cubeV() {
    return m_l * m_w * m_h;
}
int Cube::SV(Cube &a) {
    int num = 0;
    if (m_w == a.m_w && m_h == a.m_h && m_l == a.m_l) {
        num = 1;
    }
    return num;
}



