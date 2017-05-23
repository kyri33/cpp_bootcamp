#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class   Zombie {
    private:
        std::string _type;
        std::string _name;
    public:
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        std::string getName(void);
        std::string getType(void);
        void setName(std::string name);
        void setType(std::string type);
};

#endif