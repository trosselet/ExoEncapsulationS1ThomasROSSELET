#ifndef WORLD_H__
#define WORLD_H__

#include <vector>
#include "Entity.h"

class World
{
public:
	World();
	void Init();
	void step();

public:
	int start;

protected:
	std::vector<Entity*> m_EntityArray;
};

#endif // !WORLD_H__