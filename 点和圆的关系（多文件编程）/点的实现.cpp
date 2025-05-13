#pragma once
#include "点的属性.h"

void Point::setX(int x)
{
   m_x = x;
}

void Point::setY(int y)
{
   m_y = y;
}

int Point::getX()
{
   return m_x;
}

int Point::getY()
{
   return m_y;
}