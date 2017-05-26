#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
        this->_hitPoints = 100;
        this->_maxHitPoints = 100;
        this->_energyPoints = 100;
        this->_maxEnergyPoints = 100;
        this->_level = 1;
        this->_name = "No Name";
        this->_meleeDamage = 30;
        this->_rangeDamage = 20;
        this->_armor = 5;
        std::cout << "FR4G-TP " << _name << " starting DEFAULT bootup sequence...... dance!!!"
            <<std::endl;
        return;
    }

    FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
        this->_hitPoints = 100;
        this->_maxHitPoints = 100;
        this->_energyPoints = 100;
        this->_maxEnergyPoints = 100;
        this->_level = 1;
        this->_meleeDamage = 30;
        this->_rangeDamage = 20;
        this->_name = name;
        this->_armor = 5;
        std::cout << "FR4G-TP " << _name << " starting NAMED bootup sequence...... dance!!!"
            <<std::endl;
        return;
    }

    FragTrap::FragTrap(const FragTrap & src) : ClapTrap() {
        *this = src;
        std::cout << "FR4G-TP " << this->_name << " starting COPY bootup sequence...... dance!!!"
            <<std::endl;
        return;
    }

    FragTrap::~FragTrap() {
        std::cout << "FR4G-TP " << this->_name << " Destroyed... (no more dancing)"
            << std::endl;
    }


void        FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (this->_energyPoints < 25) {
        std::cout << "FR4G-TP " << this->_name << " does not have enough energy points for the random attack"
            << std::endl;
        return;
    }
    std::string attacks[] = {"Bitch Slap", "Crotch Kick", "Fuck", "Bazooka Attack",
        "Slam door on face"};
    std::srand(target.length() + std::time(0));
    std::cout << "FR4G-TP " << this->_name << " Attacked " << target << " with a "
        << attacks[std::rand() % 5] << std::endl;
    this->_energyPoints -= 25;
}