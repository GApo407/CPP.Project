#pragma once
// 创建 点类
class Point
{
private:
   int m_x{}; // 点的x坐标
   int m_y{}; // 点的y坐标
public:
   void setX(int x); // 设置点的x坐标

   void setY(int y); // 设置点的y坐标

   int getX(); // 获取点的x坐标

   int getY(); // 获取点的y坐标
};