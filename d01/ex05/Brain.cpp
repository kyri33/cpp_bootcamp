#include "Brain.hpp"
#define HEX "0123456789ABCDEF"

Brain::Brain(std::string type) {
    this->type = type;
}

Brain::Brain(void) {
    return;
}

Brain::~Brain(void) {
    return;
}

std::string Brain::identify(void) const {
    std::string addr = "";
    long    num = (long) this;
    while (num > 0) {
        addr = HEX[num % 16] + addr;
        num /= 16;
    }
    addr = "0x" + addr;
    return addr;
}