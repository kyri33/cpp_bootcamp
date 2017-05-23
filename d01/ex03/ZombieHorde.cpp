#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
    this-> zombies = new Zombie[n];
    this->size = n;
    std::string names[] = {"John", "Jacob", "Jingleheimer", "Schmidt", "BillyBob", "Jonothan"};
    std::srand(std::time(0));
    for (int i = 0; i < n; i++) {
        this->zombies[i].setName(names[std::rand() % 6]);
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] this->zombies;
}

void    ZombieHorde::announce() {
    for (int i = 0; i < size; i++)
        this->zombies[i].announce();
}