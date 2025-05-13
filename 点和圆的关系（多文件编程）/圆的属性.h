#pragma once
#include "点的属性.h"

// 创建 圆类
class Circle
{
    // 圆的属性
private:
    int m_R{}; // 半径

    Point m_Center; // 圆心
public:
    void setR(int r); // 设置半径

    int getR(); // 获取半径

    void setCenter(int a, int b); // 设置圆心

    Point getCenter(); // 获取圆心
};