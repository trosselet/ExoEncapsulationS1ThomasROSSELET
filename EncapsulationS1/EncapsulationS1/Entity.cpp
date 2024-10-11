#include "Entity.h"
#include <iostream>

Entity::Entity()
{
}

void Entity::sayHello()
{
	std::cout << "Hello entity" << std::endl;
}

Entity::~Entity()
{
}
