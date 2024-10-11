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
    Mob* mob = new Mob(5, 5, 10, 1, 0, 0);
    Player* player = new Player(0, 0, 10, 1, 1, 1);

    m_EntityArray.push_back(staticObj);
    m_EntityArray.push_back(breakableObj);
    m_EntityArray.push_back(mob);
    m_EntityArray.push_back(player);
}

void distance()
{
    
}

void World::step()
{
    Player* player = nullptr;
    Mob* mob = nullptr;
    BreakableObject* breakableObj = nullptr;

    for (auto entity : m_EntityArray)
    {
        if (Player* p = dynamic_cast<Player*>(entity))
        {
            player = p;
        }
        if (Mob* m = dynamic_cast<Mob*>(entity))
        {
            mob = m;
        }
        if (BreakableObject* b = dynamic_cast<BreakableObject*>(entity))
        {
            breakableObj = b;
        }
    }

    if (player)
    {
        if (mob && mob->getCurrentHealth() > 0) 
        {
            
                
            if (player->getPosition().getPosX() == mob->getPosition().getPosX())
            {
                if (player->getPosition().getPosY() - mob->getPosition().getPosY() < 0)
                    player->setDirY(1);

                if (player->getPosition().getPosY() - mob->getPosition().getPosY() > 0)
                    player->setDirY(-1);

                player->move();
            }
            else if (player->getPosition().getPosY() == mob->getPosition().getPosY())
            {
                if (player->getPosition().getPosX() - mob->getPosition().getPosX() < 0)
                    player->setDirX(1);

                if (player->getPosition().getPosX() - mob->getPosition().getPosX() > 0)
                    player->setDirX(-1);
                player->move();
            }
            else
            {
                if (mob->getPosition() - player->getPosition() < Vector2(0, 0))
                {
                    player->setDirX(-1);
                    player->setDirY(-1);
                }
                player->move();
            }

            if (player->getPosition().getPosX() - mob->getPosition().getPosX() == 1 || player->getPosition().getPosX() - mob->getPosition().getPosX() == -1)
            {
                if (player->getPosition().getPosY() - mob->getPosition().getPosY() == 1 || player->getPosition().getPosY() - mob->getPosition().getPosY() == -1)
                {
                    player->attack(mob);
                }
            }
        }

        else if (breakableObj && breakableObj->getCurrentHealth() > 0 && mob->getCurrentHealth() <= 0)
        {
            if (player->getPosition().getPosX() == breakableObj->getPosition().getPosX())
            {
                if (player->getPosition().getPosY() - breakableObj->getPosition().getPosY() < 0)
                    player->setDirY(1);

                if (player->getPosition().getPosY() - breakableObj->getPosition().getPosY() > 0)
                    player->setDirY(-1);

                player->move();
            }
            else if (player->getPosition().getPosY() == breakableObj->getPosition().getPosY())
            {
                if (player->getPosition().getPosX() - breakableObj->getPosition().getPosX() < 0)
                    player->setDirX(1);

                if (player->getPosition().getPosX() - breakableObj->getPosition().getPosX() > 0)
                    player->setDirX(-1);
                player->move();
            }
            else
            {
                if (breakableObj->getPosition() - player->getPosition() < Vector2(0, 0))
                {
                    player->setDirX(-1);
                    player->setDirY(-1);
                }
                player->move();
            }

            if (player->getPosition().getPosX() - breakableObj->getPosition().getPosX() == 1 || player->getPosition().getPosX() - breakableObj->getPosition().getPosX() == -1)
            {
                if (player->getPosition().getPosY() - breakableObj->getPosition().getPosY() == 1 || player->getPosition().getPosY() - breakableObj->getPosition().getPosY() == -1)
                {
                    player->attack(breakableObj);
                }
            }
        }

        if (mob->getCurrentHealth() <= 0 && breakableObj->getCurrentHealth() <= 0)
        {
            start = 1;
        }

        if(start == 1)
        {
            std::cout << "Simulation Finished" << std::endl;
            start = 1;
        }
    }
}

