#ifndef MOB_H__
#define MOB_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
public:

	Mob(float x, float y, float maxHealth, float dirX, float dirY, float speed);
	void takeDamage(float damage) override;
	void move() override;
};

#endif // !MOB_H__
