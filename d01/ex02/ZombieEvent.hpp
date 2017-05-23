#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include <iostream>
# include "Zombie.hpp"

class   ZombieEvent {
    public:
        static std::string  type;
        static void         setZombieType(std::string zType);
        static Zombie*      newZombie(std::string name);
        static Zombie*      randomChump(void);
};

#endif