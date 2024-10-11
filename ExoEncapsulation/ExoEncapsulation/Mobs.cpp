#include "Mobs.h"
#include <iostream>

Mob::Mob(float x, float y, float maxHealth, float dirX, float dirY, float speed) : Entity(x, y), Alive(maxHealth), AMovable(dirX, dirY, speed)
{
	std::cout << "Mob just created at x = " << x << " and y = " << y << " with " << m_MaxHealth << " health with direction x = " << dirX << " and y = " << dirY << std::endl;
}

void Mob::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	if (m_CurrentHealth == 0)
		std::cout << "Mob just died" << std::endl;
}

void Mob::move()
{
	m_Position.setPosX(m_Position.getPosX() + m_Dir.getPosX() * m_Speed);
	m_Position.setPosY(m_Position.getPosY() + m_Dir.getPosY() * m_Speed);
	std::cout << "Mob moved to x = " << m_Position.getPosX() << " and y = " << m_Position.getPosY() << std::endl;
}
