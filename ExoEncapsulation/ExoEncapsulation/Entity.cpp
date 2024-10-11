#include "Entity.h"

Entity::Entity(float x, float y) : m_Position(Vector2(x, y))
{
}

Vector2 Entity::getPosition() const
{
	return m_Position;
}

void Entity::setPosition(float x, float y)
{
	m_Position.setPosX(x);
	m_Position.setPosY(y);
}