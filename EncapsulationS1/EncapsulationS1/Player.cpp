#include "Player.h"
#include <iostream>

Player::Player() : life(10)
{
}

void Player::sayHello()
{
	std::cout << "Hello player" << std::endl;
}

bool Player::IsAlive()
{
	if (life > 0)
		return true;
	else
		return false;
}

void Player::takeDamage(int x)
{
	life -= x;
	std::cout << life << std::endl;
	if (!IsAlive())
		std::cout << "Player dead" << std::endl;
}

