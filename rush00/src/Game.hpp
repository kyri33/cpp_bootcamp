#ifndef GAME_H
# define GAME_H

# include <ncurses.h>
# include <unistd.h>
# include <sys/time.h>
# include "Map.hpp"
# include <iostream>
# include "GameElement.class.hpp"
# include "Player.class.hpp"
# include "Enemy.class.hpp"

class Game {
    private:
        int         fps;
        int         timePassed;
        int         ticker;
        GameElement *head;
        GameElement *tail;
        Enemy       *curr;
        Enemy       *enemies;
        Enemy       *enemyTail;
        int         size;
        int         _h;
        int         _w;
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
        int     add_enemy(int tick);
        bool    handle_enemies(int tick, Enemy *temp);
};

#endif