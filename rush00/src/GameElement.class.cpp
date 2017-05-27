#include "GameElement.class.hpp"

GameElement::GameElement(): _x(0), _y(0), _name('P') {
    _x = 0;
    _y = 0;
    _Velocity = 1;
    _level = 1;
    //std::cout << "Default player object created" << std::endl;
}


GameElement::GameElement(int x, int y, char name): _x(x), _y(y), _name(name) {
    _Velocity = 1;
    _level = 1;
    //std::cout << "Player object created" << std::endl;
}

GameElement::GameElement(GameElement const & rhs): _x(rhs._x), _y(rhs._y), _name(rhs._name) {
    //std::cout << "Player object copied" << std::endl;  
}

GameElement & GameElement::operator = (GameElement const & rhs) {
    if (this != &rhs){
        this->_x = rhs._x;
        this->_y = rhs._y;
        this->_name = rhs._name;
    }
    return *this;
}

GameElement::~GameElement() {
    std::cout << "Game over" << std::endl;
}

void GameElement::move_x(int dir) {
    this->_x += this->_Velocity * dir;
}

void GameElement::move_y(int dir) {
    this->_y += this->_Velocity * dir;
}

int     GameElement::getX() {
    return _x;
}

int     GameElement::getY() {
    return _y;
}

int     GameElement::getVelocity() {
    return _Velocity;
}

char* GameElement::getName() {
    return &_name;
}

void    GameElement::setVelocity(int vel) {
    this->_Velocity = vel;
}

GameElement*    GameElement::shoot() {
    GameElement* bullet = new GameElement(this->_x + 1, this->_y, '-');
    bullet->setVelocity(2);
    return bullet; // TODO ALOT
}