#ifndef IATTACK_H__
#define IATTACK_H__

#include "Alive.h"

class IAttack
{
public:
	virtual void attack(Alive* target) = 0;
};

#endif // !IATTACK_H__