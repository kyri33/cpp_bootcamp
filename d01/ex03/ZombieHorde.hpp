#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

# include "Zombie.hpp"

class ZombieHorde {
    public:
        ZombieHorde(int n);
        ~ZombieHorde(void);
        Zombie  *zombies;
        int     size;
        void    announce(void);
};

#endif