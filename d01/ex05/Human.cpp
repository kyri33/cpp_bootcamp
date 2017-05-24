#include "Human.hpp"

const Brain&   Human::getBrain() {
    return myBrain;
}

std::string Human::identify(void) const {
    return myBrain.identify();
}