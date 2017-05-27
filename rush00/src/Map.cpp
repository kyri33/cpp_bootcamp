#include "Map.hpp"

Map::Map() : offset(0), check(false) {
    return;
}

Map::Map(Map & src) {
    *this = src;
    return;
}

Map &   Map::operator=(Map & rhs) {
    this->offset = rhs.getOffset();
    this->check = rhs.getCheck();
    return *this;
}

void    Map::print() {
    int h, w;
    getmaxyx(stdscr, h, w);
    for (int x = 0; x < w - 6; x++) {
        mvprintw(2, x, &Map::body[(offset + x) % 7]);
        mvprintw(h - 3, x, &Map::body[(offset + x) % 7]);
    }
}

int     Map::getOffset() {
    return this->offset;
}

void    Map::setOffset(int off) {
    this->offset = off;
}

int     Map::getCheck() {
    return this->check;
}

char    Map::body[] = {'-', '*', '-', '*', '-', '*', '-'};

