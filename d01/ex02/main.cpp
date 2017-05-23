#include "ZombieEvent.hpp"

int main(void)
{
    Zombie  *kyri;
    Zombie  *viashen;
    Zombie  *chef;
    Zombie  *chick;
    Zombie  *random;

    kyri = ZombieEvent::newZombie("Kyri");
    ZombieEvent::setZombieType("Idiot");
    viashen = ZombieEvent::newZombie("Viashen");
    ZombieEvent::setZombieType("Legend");
    chef = ZombieEvent::newZombie("Chef");
    delete kyri;
    delete viashen;
    delete chef;
    ZombieEvent::setZombieType("Girl");
    chick = ZombieEvent::newZombie("Natrishka");
    delete chick;
    ZombieEvent::setZombieType("Random");
    random = ZombieEvent::randomChump();
    delete random;
    return 0;
}