#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include "GameElement.class.hpp"

class Enemy : public GameElement {
     std::string _name;
     public:
        Enemy();
        Enemy(int seed, int w, int h);
        Enemy(Enemy const & rhs);
        Enemy & operator=(Enemy const &);
        ~Enemy();
        void    move(void);
        Enemy*  next;
        bool    alive;
};

#endif