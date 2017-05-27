#include <ncurses.h>
#include <unistd.h>
#include "Game.hpp"

int     main(void) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    curs_set(FALSE);
    Game *game = new Game();
    game->start();
    delwin(stdscr);
    endwin();
}