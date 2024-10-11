#include "AMovable.h"

AMovable::AMovable(float dirX, float dirY, float speed) : m_Dir(dirX, dirY), m_Speed(speed)
{

}

void AMovable::setDir(float x, float y)
{
	m_Dir.setPosX(x);
	m_Dir.setPosY(y);
}

void AMovable::setSpeed(float _speed)
{
	m_Speed = _speed;
}

void AMovable::move()
{
}

AMovable::~AMovable()
{

}
