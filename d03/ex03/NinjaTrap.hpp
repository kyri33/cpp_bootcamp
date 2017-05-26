#ifndef NINJA_TRAP_H

# define NINJA_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
    public:
        NinjaTrap(void);
        NinjaTrap(std::string const name);
        NinjaTrap(const NinjaTrap & src);
        ~NinjaTrap(void);
        
        void    ninjaShoebox(NinjaTrap & target);
        void    ninjaShoebox(FragTrap & target);
        void    ninjaShoebox(ScavTrap & target);
};

#endif