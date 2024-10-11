#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float x, float y, float maxHealth) : Entity(x, y), Alive(maxHealth)
{
	std::cout << "Breakable Object created at x = " << x << " and y = " << y << " with " << m_MaxHealth << " life" << std::endl;
}

void BreakableObject::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	if (m_CurrentHealth == 0)
		std::cout << "Breakable Object broke" << std::endl;
}