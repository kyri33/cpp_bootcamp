#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
    _maxEnergyPoints(50), _level(1), _name("NoName"), _meleeDamage(20), _rangeDamage(15),
    _armor(3) {
        std::cout << "SC4V-TP " << _name << " initiating DEFAULT bootup, untsuntsuntsunts"
            <<std::endl;
        return;
    }

    ScavTrap::ScavTrap(std::string const name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
    _maxEnergyPoints(50), _level(1), _meleeDamage(20), _rangeDamage(15),
    _armor(0) {
        this->_name = name;
        std::cout << "SC4V-TP " << _name << " initiating NAMED bootup, untsuntsuntsunts"
            <<std::endl;
        return;
    }

    ScavTrap::ScavTrap(const ScavTrap & src) {
        *this = src;
        std::cout << "SC4V-TP " << this->_name << " initiating COPY bootup, untsuntsuntsunts"
            <<std::endl;
        return;
    }

    ScavTrap::~ScavTrap() {
        std::cout << "SC4V-TP " << this->_name << " Destroyed :(:(:("
            << std::endl;
    }

    ScavTrap &  ScavTrap::operator=(const ScavTrap & rhs) {
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

   void         ScavTrap::rangedAttack(std::string const & target) {
       std::cout << "SC4V-TP " << this->_name << " range attacks " << target
        << ", inflicting " << this->_rangeDamage << " damage HAHAHA" << std::endl;
   }

   void         ScavTrap::meleeAttack(std::string const & target) {
       std::cout << "SC4V-TP " << this->_name << " melee attacks " << target
        << ", inflicting " << this->_meleeDamage << " damage HAHAHA" << std::endl;
   }

void         ScavTrap::takeDamage(unsigned int amount) {
    if (amount < (unsigned int)this->_armor)
        return;
    this->_hitPoints = this->_hitPoints - (amount - this->_armor);
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "SC4V-TP " << this->_name << " Took " << (amount - this->_armor)
        << " Damage points" << std::endl;
}

void        ScavTrap::beRepaired(unsigned int amount) {
    this->_hitPoints += amount;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    std::cout << "SC4V-TP " << this->_name << " was repaired for " << amount
        << " hit points" << std::endl;
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

    int         ScavTrap::getHitPoints() const {
        return this->_hitPoints;
    }

    int         ScavTrap::getMaxHitPoints() const {
        return this->_maxHitPoints;
    }

    int         ScavTrap::getEnergyPoints(void) const {
        return this->_energyPoints;
    }

    int         ScavTrap::getMaxEnergyPoints(void) const {
        return this->_maxEnergyPoints;
    }

    int         ScavTrap::getLevel() const {
        return this->_level;
    }

    std::string ScavTrap::getName() const {
        return this->_name;
    }

    int         ScavTrap::getMeleeDamage() const {
        return this->_meleeDamage;
    }

    int         ScavTrap::getRangeDamage() const {
        return this->_rangeDamage;
    }

    int         ScavTrap::getArmor() const {
        return this->_armor;
    }