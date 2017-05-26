#ifndef SCAV_TRAP_H

# define SCAV_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(void);
        ScavTrap(std::string const name);
        ScavTrap(const ScavTrap & src);
        ~ScavTrap(void);
        void        challengeNewcomer(std::string const & target);
};

#endif