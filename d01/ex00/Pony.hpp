#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string.h>

class   Pony {

    public:
        Pony(std::string nam, int wei, std::string col);
        ~Pony(void);
        void    sayHello();

    private:
        std::string     name;
        int             weight;
        std::string     colour;

};

#endif