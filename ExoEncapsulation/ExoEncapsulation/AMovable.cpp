#include "AMovable.h"

AMovable::AMovable(float dirX, float dirY, float speed) : m_Dir(dirX, dirY), m_Speed(speed)
{

}

void AMovable::setDirX(float x)
{
	m_Dir.setPosX(x);
}

void AMovable::setDirY(float y)
{
	m_Dir.setPosY(y);
}

float AMovable::getDirX()
{
	return m_Dir.getPosX();
}

float AMovable::getDirY()
{
	return m_Dir.getPosY();
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
