#include "ZombieEvent.hpp"

void        ZombieEvent::setZombieType(std::string zType) {
    ZombieEvent::type = zType;
}

Zombie*     ZombieEvent::newZombie(std::string name) {
    Zombie* myZombie = new Zombie();
    myZombie->setName(name);
    myZombie->setType(ZombieEvent::type);
    myZombie->announce();
    return myZombie;
}

Zombie*     ZombieEvent::randomChump(void) {
    std::string names[] = {"John", "Jacob", "Jingleheimer", "Schmidt", "BillyBob"};
    std::srand(std::time(0));
    Zombie  *myZombie = new Zombie();
    myZombie->setName(names[std::rand() % 5]);
    myZombie->setType(ZombieEvent::type);
    myZombie->announce();
    return myZombie;
}

std::string ZombieEvent::type = "Friendly";