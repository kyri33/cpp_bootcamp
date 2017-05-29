#ifndef BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

#include "GameElement.class.hpp"

class Bullet : public GameElement {
     std::string _name;
     public:
        Bullet();
        Bullet(std::string name);
        Bullet(Bullet const & rhs);
        Bullet & operator=(Bullet const &);
        ~Bullet();
};

#endif