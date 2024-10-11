#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttack.h"

class Player : public Entity, public Alive, public AMovable, public IAttack
{
public:

	Player(float x, float y, float maxHealth, float dirX, float dirY, float speed);
	void takeDamage(float damage) override;
	void move() override;
	void attack(Alive* target) override;
};

#endif // !PLAYER_H__