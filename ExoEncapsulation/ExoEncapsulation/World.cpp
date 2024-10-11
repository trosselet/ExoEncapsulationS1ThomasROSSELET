#include "World.h"
#include "BreakableObject.h"
#include "Mobs.h"
#include "Player.h"
#include "StaticObject.h"
#include <iostream>

World::World()
{
    start = 0;
}

void World::Init()
{
    StaticObject* staticObj = new StaticObject(10, 20);
    BreakableObject* breakableObj = new BreakableObject(15, 25, 1);
    Mob* mob = new Mob(5, 5, 20, 1, 0, 1);
    Player* player = new Player(0, 0, 10, 1, 1, 2);

    m_EntityArray.push_back(staticObj);
    m_EntityArray.push_back(breakableObj);
    m_EntityArray.push_back(mob);
    m_EntityArray.push_back(player);
}

void World::step()
{
    for (auto entity : m_EntityArray)
    {
        Player* player = dynamic_cast<Player*>(entity);
        Mob* mob = dynamic_cast<Mob*>(entity);
        BreakableObject* breakableObj = dynamic_cast<BreakableObject*>(entity);


        if (player)
        {
            if (mob && mob->getCurrentHealth() > 0) 
            {
                mob->move();
                std::cout << "coucou" << std::endl;
                if (player->getPosition().getPosX() == mob->getPosition().getPosX())
                {
                    if (player->getPosition().getPosY() - mob->getPosition().getPosY() < 0)
                        player->setDir(0, 1);

                    if (player->getPosition().getPosY() - mob->getPosition().getPosY() > 0)
                        player->setDir(0, -1);

                    player->move();
                    break;
                }
                else if (player->getPosition().getPosY() == mob->getPosition().getPosY())
                {
                    if (player->getPosition().getPosX() - mob->getPosition().getPosX() < 0)
                        player->setDir(1, 0);

                    if (player->getPosition().getPosX() - mob->getPosition().getPosX() > 0)
                        player->setDir(-1, 0);
                    player->move();
                    break;
                }
                else
                {
                    player->setDir(1, 1);
                    player->move();
                    break;
                }

                if (player->getPosition().getPosX() - mob->getPosition().getPosX() == 1 || player->getPosition().getPosX() - mob->getPosition().getPosX() == -1)
                {
                    if (player->getPosition().getPosY() - mob->getPosition().getPosY() == 1 || player->getPosition().getPosY() - mob->getPosition().getPosY() == -1)
                    {
                        player->attack(mob);
                        break;
                    }
                }
            }

            else if (breakableObj && breakableObj->getCurrentHealth() > 0 && mob->getCurrentHealth() <= 0)
            {
                if (player->getPosition().getPosX() == breakableObj->getPosition().getPosX())
                {
                    if (player->getPosition().getPosY() - breakableObj->getPosition().getPosY() < 0)
                        player->setDir(0, 1);

                    if (player->getPosition().getPosY() - breakableObj->getPosition().getPosY() > 0)
                        player->setDir(0, -1);

                    player->move();
                    break;
                }
                else if (player->getPosition().getPosY() == breakableObj->getPosition().getPosY())
                {
                    if (player->getPosition().getPosX() - breakableObj->getPosition().getPosX() < 0)
                        player->setDir(1, 0);

                    if (player->getPosition().getPosX() - breakableObj->getPosition().getPosX() > 0)
                        player->setDir(-1, 0);
                    player->move();
                    break;
                }
                else
                {
                    player->setDir(1, 1);
                    player->move();
                    break;
                }

                if (player->getPosition().getPosX() - breakableObj->getPosition().getPosX() == 1 || player->getPosition().getPosX() - breakableObj->getPosition().getPosX() == -1)
                {
                    if (player->getPosition().getPosY() - breakableObj->getPosition().getPosY() == 1 || player->getPosition().getPosY() - breakableObj->getPosition().getPosY() == -1)
                    {
                        player->attack(breakableObj);
                        break;
                    }
                }
            }

            else if(start == 1)
            {
                std::cout << "Simulation Finished" << std::endl;
                start = 1;
            }
        }
    }
}

