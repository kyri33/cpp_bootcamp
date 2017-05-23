#include "Pony.hpp"

Pony::Pony(std::string nam, int wei, std::string col) : name(nam), weight(wei), colour(col) {
    std::cout << "Pony created" << std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Pony destroyed" << std::endl;
}

void    Pony::sayHello()
{
    std::cout << "Hi, my name is " << this->name << " and I am a " << this->colour << " Pony and I weigh "
        << this->weight << " Kilograms" << std::endl;
}