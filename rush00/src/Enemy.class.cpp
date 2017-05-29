#include "Enemy.class.hpp"
#include <iostream>

Enemy::Enemy() {
    this->_x = 100;
    this->_y = 10;
    this->_name = '<';
    this->alive = true;
}

Enemy::Enemy(int seed, int w, int h) {
    std::srand(std::time(0) + seed);
    this->_x = w;
    this->_y = std::rand() % h;
    this->_name = '<';
    this->alive = true;
}

Enemy::Enemy(Enemy const & rhs): _name(rhs._name) {
    //std::cout << "Enemy spawned" << std::endl;
}

Enemy & Enemy::operator=(Enemy const &rhs) {
    if (this != &rhs){
        _name = rhs._name;
        _x = rhs._x;
        _y = rhs._y;
    }
    return *this;
}

void    Enemy::move() {
    this->move_x(-1);
}

Enemy::~Enemy(){};