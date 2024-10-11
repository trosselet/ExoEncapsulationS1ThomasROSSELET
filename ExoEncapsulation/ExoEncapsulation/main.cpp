#include "World.h"
#include "Mobs.h"

int main() {

    World world;
    world.Init();

    while (true) {
        world.step();
        if (world.start == 1)
        {
            break;
        }
    }

    return 0;
}