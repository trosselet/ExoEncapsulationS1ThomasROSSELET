#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "IAlive.h"

class Player : public Entity, public IAlive
{
public:
	Player();
	void sayHello() override;
	bool IsAlive() override;
	void takeDamage(int x);

private:
	int life;
};

#endif // !PLAYER_H__