#include "Bullet.class.hpp"

Bullet::Bullet(std::string name) : _name(name) {
    std::cout << "Bullet spawned" << std::endl;
}

Bullet::Bullet(Bullet const & rhs): _name(rhs._name) {
    std::cout << "Bullet spawned" << std::endl;
}

Bullet & Bullet::operator=(Bullet const &rhs) {
    if (this != &rhs){
        _name = rhs._name;
    }
    return *this;
}

Bullet::~Bullet(){};