#include "Zombie.hpp"

Zombie::Zombie(void) {
    return;
}

Zombie::~Zombie(void) {
    return;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->getName() << " (" << this->getType() << ") BRAAAAAAAIIIIIIINS !!!!" 
        << std::endl;
    return;
}

std::string Zombie::getName() {
    return this->_name;
}

void        Zombie::setName(std::string name) {
    this->_name = name;
    return;
}

std::string Zombie::getType() {
    return this->_type;
}

void        Zombie::setType(std::string type) {
    this->_type = type;
    return;
}