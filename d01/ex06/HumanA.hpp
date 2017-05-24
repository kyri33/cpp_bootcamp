#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA {
    private:
        Weapon&      _weapon;
        std::string name;
    public:
        void    attack(void);
        HumanA(std::string name, Weapon& weapon);
};

#endif