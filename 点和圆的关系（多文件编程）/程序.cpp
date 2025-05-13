#include <iostream>
#include "点的属性.h"
#include "圆的属性.h"
#include "圆的实现.cpp"
#include "点的实现.cpp"
using namespace std;

// 点到圆心的距离公式：（圆心1,点2） 根号{ (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) }
// 判断关系： 点到圆心的距离 与 半径对比{ (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) 与 R * R 对比 }
// 判断点与圆的关系
void isInCircle(Circle &a, Point &b) {
    // 计算两点之间距离 平方
    int gapS = (a.getCenter().getX() - b.getX()) * (a.getCenter().getX() - b.getX())
               + (a.getCenter().getY() - b.getY()) * (a.getCenter().getY() - b.getY());
    // 计算半径   的平方
    int rS = a.getR() * a.getR();
    // 判断关系
    if (gapS == rS) {
        cout << "点在圆上" << endl;
    } else if (gapS > rS) {
        cout << "点在圆外" << endl;
    } else {
        cout << "点在圆内" << endl;
    }
}

int main() {
    // 创建圆
    Circle v1;
    v1.setCenter(10, 0);
    v1.setR(10);

    // 创建点
    Point v2;
    v2.setX(10);
    v2.setY(10);

    // 判断关系
    isInCircle(v1, v2);
    return 0;
}
