#ifndef FRAG_TRAP_H

# define FRAG_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(std::string const name);
        FragTrap(const FragTrap & src);
        ~FragTrap(void);
        void        vaulthunter_dot_exe(std::string const & target);
};

#endif