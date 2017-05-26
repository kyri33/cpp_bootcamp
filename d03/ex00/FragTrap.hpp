#ifndef FRAG_TRAP_H

# define FRAG_TRAP_H

# include <iostream>

class FragTrap {
    private:
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
        FragTrap(void);
        FragTrap(std::string const name);
        FragTrap(const FragTrap & src);
        ~FragTrap(void);
        FragTrap &  operator=(const FragTrap & rhs);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        vaulthunter_dot_exe(std::string const & target);

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