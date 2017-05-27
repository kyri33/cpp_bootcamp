#ifndef GAME_H
# define GAME_H

# include <ncurses.h>
# include <unistd.h>
# include <sys/time.h>
#include "Map.hpp"
#include <iostream>
#include "GameElement.class.hpp"

class Game {
    private:
        int     fps;
        int     timePassed;
        int     ticker;
        GameElement *head;
        GameElement *tail;
        int         size;
    public:
        Game();
        Game(Game & src);
        ~Game(void);
        Game &  operator=(Game & rhs);

        int     getFps(void);
        int     getTimePassed(void);
        void    start(void);
        int     getTicker(void);
        int     getSize(void);
        void    render_elements(void);
};

#endif