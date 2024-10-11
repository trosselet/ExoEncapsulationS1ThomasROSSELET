#include "Player.h"
#include <iostream>

Player::Player(float x, float y, float maxHealth, float dirX, float dirY, float speed) : Entity(x, y), Alive(maxHealth), AMovable(dirX, dirY, speed)
{
	std::cout << "Player just created at x = " << x << " and y = " << y << " with " << maxHealth << " health with direction x = " << dirX << " and y = " << dirY << std::endl;
}

void Player::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	if (m_CurrentHealth == 0)
		std::cout << "Player just died" << std::endl;
}

void Player::move()
{
	m_Position.setPosX(m_Position.getPosX() + m_Dir.getPosX() * m_Speed);
	m_Position.setPosY(m_Position.getPosY() + m_Dir.getPosY() * m_Speed);
	std::cout << "Player moved to x = " << m_Position.getPosX() << " and y = " << m_Position.getPosY() << std::endl;
}

void Player::attack(Alive* target)
{
	target->takeDamage(10);
	std::cout << "Player attacked" << std::endl;
}
