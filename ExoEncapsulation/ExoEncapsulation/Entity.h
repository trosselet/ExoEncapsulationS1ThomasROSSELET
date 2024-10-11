#ifndef ENTITY_H__
#define ENTITY_H__

#include "Vector2.h"

class Entity
{
public:
	Entity(float x, float y);
	virtual Vector2 getPosition() const;
	virtual void setPosition(float x, float y);

protected:

	Vector2 m_Position;
};

#endif // !ENTITY_H__
