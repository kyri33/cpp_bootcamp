#include "Player.class.hpp"

Player::Player() : GameElement(10, 10, '>') {
    
}

Player::Player(Player const & rhs) {
    if (this != &rhs) {
        this->_x = rhs._x;
        this->_y = rhs._y;
        this->_name = rhs._name;
    }
}

Player & Player::operator=(Player const &rhs) {
    if (this != &rhs){
        this->_x = rhs._x;
        this->_y = rhs._y;
        this->_name = rhs._name;
    }
    return *this;
}

GameElement*    Player::shoot() {
    GameElement* bullet = new GameElement(this->_x + 1, this->_y, '-');
    bullet->setVelocity(2);
    return bullet; // TODO ALOT
}

Player::~Player(){};