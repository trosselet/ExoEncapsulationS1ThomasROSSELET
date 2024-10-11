#include "Point.h"

Point::Point()
{
}

Point::Point(float x, float y, float z) : mX(x), mY(y), mZ(z)
{
}

Point::~Point()
{
}

std::string Point::ToString()
{
    std::string sX, sY, sZ, value;
    sX = std::to_string(this->mX);
    sY = std::to_string(this->mY);
    sZ = std::to_string(this->mZ);

    value = "X = " + sX + ", Y = " + sY + ", Z = " + sZ;
    return value;
}
