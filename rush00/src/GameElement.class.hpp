#ifndef GAMEELEMENT_CLASS_HPP
# define GAMEELEMENT_CLASS_HPP

#include <iostream>
#include <string>
#include <ctime>

class GameElement {
protected:
    int     _x;
    int     _y;
    int     _Velocity;
    int     _level;
    char    _name;
    public:
        GameElement();
        GameElement(int x, int y, char name);
        GameElement(GameElement const & rhs);
        GameElement & operator = (GameElement const &);
        ~GameElement();
        void move_x(int dir);
        void move_y(int dir);

        int         getX(void);
        int         getY(void);
        int         getVelocity(void);
        void         setVelocity(int vel);
        char*        getName(void);
        GameElement *next;
        GameElement *prev;
};

#endif