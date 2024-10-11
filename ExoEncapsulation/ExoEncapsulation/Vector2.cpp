#include "Vector2.h"
#include <iostream>

Vector2::Vector2(float x, float y) : m_x(x), m_y(y)
{
}

float Vector2::getPosX()
{
    return this->m_x;
}

float Vector2::getPosY()
{
    return this->m_y;
}

void Vector2::setPosX(float posX)
{
    this->m_x = posX;
}

void Vector2::setPosY(float posY)
{
    this->m_y = posY;
}


Vector2::~Vector2()
{
}
