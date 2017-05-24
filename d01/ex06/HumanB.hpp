#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB {
    private:
        Weapon*      _weapon;
        std::string name;
    public:
        void    attack(void);
        HumanB(std::string name);
        void    setWeapon(Weapon& weapon);
        
};

#endif