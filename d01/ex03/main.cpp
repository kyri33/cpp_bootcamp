#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde *myHorde = new ZombieHorde(10);
    myHorde->announce();
    delete myHorde;
    return 1;
}