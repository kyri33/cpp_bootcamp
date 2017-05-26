#ifndef CLAP_TRAP_H

# define CLAP_TRAP_H

# include <iostream>

class ClapTrap {
    protected:
        int         _hitPoints;
        int         _maxHitPoints;
        int         _energyPoints;
        int         _maxEnergyPoints;
        int         _level;
        std::string _name;
        int         _meleeDamage;
        int         _rangeDamage;
        int         _armor;
    public:
        ClapTrap(void);
        ClapTrap(const ClapTrap & src);
        ClapTrap(std::string const name);
        ~ClapTrap(void);
        ClapTrap &  operator=(const ClapTrap & rhs);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);

        int         getHitPoints(void) const;
        int         getMaxHitPoints(void) const;
        int         getEnergyPoints(void) const;
        int         getMaxEnergyPoints(void) const;
        int         getLevel(void) const;
        std::string getName(void) const;
        int         getMeleeDamage(void) const;
        int         getRangeDamage(void) const;
        int         getArmor(void) const;
};

#endif