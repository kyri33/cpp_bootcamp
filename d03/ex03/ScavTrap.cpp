#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
        this->_hitPoints = 100;
        this->_maxHitPoints = 100;
        this->_energyPoints = 50;
        this->_maxEnergyPoints = 50;
        this->_level = 1;
        this->_name = "No Name";
        this->_meleeDamage = 20;
        this->_rangeDamage = 15;
        this->_armor = 3;
        std::cout << "SC4V-TP " << _name << " initiating DEFAULT bootup, untsuntsuntsunts"
            <<std::endl;
        return;
    }

    ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
        this->_hitPoints = 100;
        this->_maxHitPoints = 100;
        this->_energyPoints = 50;
        this->_maxEnergyPoints = 50;
        this->_level = 1;
        this->_meleeDamage = 20;
        this->_rangeDamage = 15;
        this->_armor = 3;
        this->_name = name;
        std::cout << "SC4V-TP " << _name << " initiating NAMED bootup, untsuntsuntsunts"
            <<std::endl;
        return;
    }

    ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap() {
        *this = src;
        std::cout << "SC4V-TP " << this->_name << " initiating COPY bootup, untsuntsuntsunts"
            <<std::endl;
        return;
    }

    ScavTrap::~ScavTrap() {
        std::cout << "SC4V-TP " << this->_name << " Destroyed :(:(:("
            << std::endl;
    }

void        ScavTrap::challengeNewcomer(std::string const & target) {
    if (this->_energyPoints < 25) {
        std::cout << "SC4V-TP " << this->_name << " does not have enough energy points for the random attack"
            << std::endl;
        return;
    }
    std::string challenges[] = {"Dance off", "Pissing contest", "ROBO DUEL"};
    std::srand(target.length() + std::time(0));
    std::cout << "SC4V-TP " << this->_name << " Challenges " << target << " to a "
        << challenges[std::rand() % 3] << std::endl;
    this->_energyPoints -= 25;
}