#ifndef ALIVE_H__
#define ALIVE_H__

class Alive
{
public:
	Alive(float maxHealth);
	virtual float getMaxHealth() const;
	virtual float getCurrentHealth() const;
	virtual void takeDamage(float m_Damage);
	~Alive();

protected:
	float m_MaxHealth;
	float m_CurrentHealth;
};

#endif // !ALIVE_H__