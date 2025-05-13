#pragma once
#include "圆的属性.h"
#include "点的属性.h"

void Circle::setR(int r)
{
    m_R = r;
}

int Circle::getR()
{
    return m_R;
}

void Circle::setCenter(int a, int b)
{
    m_Center.setX(a);
    m_Center.setY(b);
}

Point Circle::getCenter()
{
    return m_Center;
}