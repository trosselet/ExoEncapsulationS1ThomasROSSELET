#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vector2.h"

class AMovable
{
public:

	AMovable(float dirX, float dirY, float speed);
	virtual void setDir(float x, float y);
	virtual void setSpeed(float _speed);
	virtual void move() = 0;
	~AMovable();

protected:
	Vector2 m_Dir;
	float m_Speed;
};

#endif // !AMOVABLE_H__