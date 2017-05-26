#include "FragTrap.hpp"

ClapTrap::ClapTrap() {
        std::cout << "CL4P-TP " << _name << " starting DEFAULT PARENT bootup sequence"
            <<std::endl;
        return;
    }

    ClapTrap::ClapTrap(std::string const name) {
        this->_name = name;
        std::cout << "CL4P-TP " << _name << " starting NAMED PARENT bootup sequence"
            <<std::endl;
        return;
    }

    ClapTrap::ClapTrap(const ClapTrap & src) {
        *this = src;
        std::cout << "CL4P-TP " << this->_name << " starting COPY PARENT bootup sequence"
            <<std::endl;
        return;
    }

    ClapTrap::~ClapTrap() {
        std::cout << "CL4P-TP " << this->_name << " Parent Destroyed"
            << std::endl;
    }

    ClapTrap &  ClapTrap::operator=(const ClapTrap & rhs) {
        this->_hitPoints = rhs.getHitPoints();
        this->_maxHitPoints = rhs.getMaxHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
        this->_level = rhs.getLevel();
        this->_name = rhs.getName();
        this->_meleeDamage = rhs.getMeleeDamage();
        this->_rangeDamage = rhs.getRangeDamage();
        this->_armor = rhs.getArmor();
        return *this;
    }

   void         ClapTrap::rangedAttack(std::string const & target) {
       std::cout << "CL4P-TP " << this->_name << " attacks " << target
        << " with range, causing " << this->_rangeDamage << " damage" << std::endl;
   }

   void         ClapTrap::meleeAttack(std::string const & target) {
       std::cout << "CL4P-TP " << this->_name << " attacks " << target
        << " with melee, causing " << this->_meleeDamage << " damage" << std::endl;
   }

void         ClapTrap::takeDamage(unsigned int amount) {
    if (amount < (unsigned int)this->_armor)
        return;
    this->_hitPoints = this->_hitPoints - (amount - this->_armor);
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "CL4P-TP " << this->_name << " Took " << (amount - this->_armor)
        << " Damage points" << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount) {
    this->_hitPoints += amount;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    std::cout << "CL4P-TP " << this->_name << " was repaired for " << amount
        << " hit points" << std::endl;
}

    int         ClapTrap::getHitPoints() const {
        return this->_hitPoints;
    }

    int         ClapTrap::getMaxHitPoints() const {
        return this->_maxHitPoints;
    }

    int         ClapTrap::getEnergyPoints(void) const {
        return this->_energyPoints;
    }

    int         ClapTrap::getMaxEnergyPoints(void) const {
        return this->_maxEnergyPoints;
    }

    int         ClapTrap::getLevel() const {
        return this->_level;
    }

    std::string ClapTrap::getName() const {
        return this->_name;
    }

    int         ClapTrap::getMeleeDamage() const {
        return this->_meleeDamage;
    }

    int         ClapTrap::getRangeDamage() const {
        return this->_rangeDamage;
    }

    int         ClapTrap::getArmor() const {
        return this->_armor;
    }