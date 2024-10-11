#include "Alive.h"

Alive::Alive(float maxHealth) : m_MaxHealth(maxHealth), m_CurrentHealth(maxHealth)
{
}

float Alive::getMaxHealth() const
{
    return this->m_MaxHealth;
}

float Alive::getCurrentHealth() const
{
    return this->m_CurrentHealth;
}

void Alive::takeDamage(float m_Damage)
{
    m_CurrentHealth -= m_Damage;
    if (m_CurrentHealth < 0)
        m_CurrentHealth = 0;
}

Alive::~Alive()
{
}
