#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
        this->_hitPoints = 60;
        this->_maxHitPoints = 60;
        this->_energyPoints = 120;
        this->_maxEnergyPoints = 120;
        this->_level = 1;
        this->_name = "No Name";
        this->_meleeDamage = 60;
        this->_rangeDamage = 5;
        this->_armor = 0;
        std::cout << "NINJA-TP " << _name << " starting DEFAULT bootup sequencee ...NINJA STEALTH"
            <<std::endl;
        return;
    }

    NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(name) {
        this->_hitPoints = 60;
        this->_maxHitPoints = 60;
        this->_energyPoints = 120;
        this->_maxEnergyPoints = 120;
        this->_level = 1;
        this->_meleeDamage = 60;
        this->_rangeDamage = 5;
        this->_name = name;
        this->_armor = 0;
        std::cout << "NINJA-TP " << _name << " starting NAMED bootup sequence...... Ninja reporting for duty "
            <<std::endl;
        return;
    }

    NinjaTrap::NinjaTrap(const NinjaTrap & src) : ClapTrap() {
        *this = src;
        std::cout << "NINJA-TP " << this->_name << " starting COPY bootup sequence Ninja copied"
            <<std::endl;
        return;
    }

    NinjaTrap::~NinjaTrap() {
        std::cout << "NINJA-TP " << this->_name << " Ninja died"
            << std::endl;
    }

    void    NinjaTrap::ninjaShoebox(NinjaTrap & target) {
        std::cout << "NINJA-TP " << this->getName() << " SHOEBOXED ANOTHER NINJA TRAP "
            << target.getName() << std::endl;
        target.takeDamage(10);
    }

    void    NinjaTrap::ninjaShoebox(FragTrap & target) {
        std::cout << "NINJA-TP " << this->getName() << " SHOEBOXED A PUSSY FRAG TRAP "
            << target.getName() << std::endl;
        target.takeDamage(10);
    }

    void    NinjaTrap::ninjaShoebox(ScavTrap & target) {
        std::cout << "NINJA-TP " << this->getName() << " SHOEBOXED A LOSER SCAV TRAP "
            << target.getName() << std::endl;
        target.takeDamage(10);
    }

