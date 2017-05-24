#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
    this->name = name;
}

void    HumanA::attack() {
    std::cout << this->name << " attacks with his " << this->_weapon.getType() 
        << std::endl;
}

