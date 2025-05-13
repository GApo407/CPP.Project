#pragma once

class Cube {
private:
    int m_l{};   // 长
    int m_h{};   // 高
    int m_w{};   // 宽
public:
    void setL(int a);   // 设置 长
    void setH(int b);   // 设置 高
    void setW(int c);   // 设置 宽
    int cubeS();        // 定义 面积
    int cubeV();        // 定义 体积
    int SV(Cube &a);    // 对比函数
};