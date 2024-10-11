#include <iostream>
#include <vector>
#include "Point.h"
#include "Entity.h"
#include "Player.h"

void Hello(Entity& entity)
{
	entity.sayHello();
}


int main(int argc, const char* argv[])
{
	/*std::cout << "Hello World !" << std::endl;

	

	int cc = 0;
	std::vector<int>* mArray = new std::vector<int>();
	while (true)
	{
		std::cin >> cc;
		mArray->push_back(cc);
		for (int i = 0; i < mArray->size(); i++)
		{
			std::cout << (*mArray)[i] << " ";
		}
		std::cout << std::endl;
	}*/

	/*Point point(1.5f, 6.8f, 8.9f);
	std::cout << point.ToString() << std::endl;*/
	
	Entity* z = new Entity();
	Player* e = new Player();

	Hello(*z);
	Hello(*e);

	e->takeDamage(5);
	std::cout << std::endl;
	e->takeDamage(5);



	return 0;
}