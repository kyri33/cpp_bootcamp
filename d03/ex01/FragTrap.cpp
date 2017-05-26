#include "FragTrap.hpp"

FragTrap::FragTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
    _maxEnergyPoints(100), _level(1), _name("NoName"), _meleeDamage(30), _rangeDamage(20),
    _armor(5) {
        std::cout << "FR4G-TP " << _name << " starting DEFAULT bootup sequence...... dance!!!"
            <<std::endl;
        return;
    }

    FragTrap::FragTrap(std::string const name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
    _maxEnergyPoints(100), _level(1), _meleeDamage(30), _rangeDamage(20),
    _armor(5) {
        this->_name = name;
        std::cout << "FR4G-TP " << _name << " starting NAMED bootup sequence...... dance!!!"
            <<std::endl;
        return;
    }

    FragTrap::FragTrap(const FragTrap & src) {
        *this = src;
        std::cout << "FR4G-TP " << this->_name << " starting COPY bootup sequence...... dance!!!"
            <<std::endl;
        return;
    }

    FragTrap::~FragTrap() {
        std::cout << "FR4G-TP " << this->_name << " Destroyed... (no more dancing)"
            << std::endl;
    }

    FragTrap &  FragTrap::operator=(const FragTrap & rhs) {
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

   void         FragTrap::rangedAttack(std::string const & target) {
       std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with range, causing " << this->_rangeDamage << " damage" << std::endl;
   }

   void         FragTrap::meleeAttack(std::string const & target) {
       std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with melee, causing " << this->_meleeDamage << " damage" << std::endl;
   }

void         FragTrap::takeDamage(unsigned int amount) {
    if (amount < (unsigned int)this->_armor)
        return;
    this->_hitPoints = this->_hitPoints - (amount - this->_armor);
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "FR4G-TP " << this->_name << " Took " << (amount - this->_armor)
        << " Damage points" << std::endl;
}

void        FragTrap::beRepaired(unsigned int amount) {
    this->_hitPoints += amount;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    std::cout << "FR4G-TP " << this->_name << " was repaired for " << amount
        << " hit points" << std::endl;
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

    int         FragTrap::getHitPoints() const {
        return this->_hitPoints;
    }

    int         FragTrap::getMaxHitPoints() const {
        return this->_maxHitPoints;
    }

    int         FragTrap::getEnergyPoints(void) const {
        return this->_energyPoints;
    }

    int         FragTrap::getMaxEnergyPoints(void) const {
        return this->_maxEnergyPoints;
    }

    int         FragTrap::getLevel() const {
        return this->_level;
    }

    std::string FragTrap::getName() const {
        return this->_name;
    }

    int         FragTrap::getMeleeDamage() const {
        return this->_meleeDamage;
    }

    int         FragTrap::getRangeDamage() const {
        return this->_rangeDamage;
    }

    int         FragTrap::getArmor() const {
        return this->_armor;
    }