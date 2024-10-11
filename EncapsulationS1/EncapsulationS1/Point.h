#ifndef POINT_H__
#define POINT_H__

#include <iostream>
#include <string>

class Point
{
public:
	Point();
	Point(float x, float y, float z);
	~Point();
	std::string ToString();


private:
	float mX;
	float mY;
	float mZ;

};


#endif // !POINT_H__
