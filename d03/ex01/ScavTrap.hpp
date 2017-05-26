#ifndef SCAV_TRAP_H

# define SCAV_TRAP_H

# include <iostream>

class ScavTrap {
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
        ScavTrap(void);
        ScavTrap(std::string const name);
        ScavTrap(const ScavTrap & src);
        ~ScavTrap(void);
        ScavTrap &  operator=(const ScavTrap & rhs);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        challengeNewcomer(std::string const & target);

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