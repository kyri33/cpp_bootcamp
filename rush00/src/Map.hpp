#ifndef MAP_H
# define MAP_H

# include "Game.hpp"

class Map {
    private:
        int     offset;
        bool    check;
    public:
        Map(void);
        Map(Map & src);
        ~Map(void);
        Map &       operator=(Map & rhs);
        static char body[];
        int         getOffset(void);
        int         getCheck(void);
        void        print();
        void        setOffset(int off);
};

#endif