#include "Game.hpp"

Game::Game() {
    this->fps = 20;
    this->timePassed = 0;
    this->ticker = 0;
    this->size = 0;
}

Game::Game(Game & src) {
    *this = src;
}

Game::~Game() {
    return;
}

Game &  Game::operator=(Game & rhs) {
    this->fps = rhs.getFps();
    this->timePassed = rhs.getTimePassed();
    this->ticker = rhs.getTicker();
    this->size = rhs.getSize();
    return *this;
}

int     Game::getFps() {
    return this->fps;
}

int     Game::getTimePassed() {
    return this->timePassed;
}

int     Game::getTicker() {
    return this->ticker;
}

int     Game::getSize() {
    return this->size;
}

void    Game::render_elements() {
    GameElement *temp;
    temp = head;
    while (temp != NULL) {
        mvprintw(temp->getY(), temp->getX(), temp->getName());
        if (temp->getVelocity() == 2)
            temp->move_x(1);
        temp = temp->next;
    }
}

void    Game::start() {
    Map *map = new Map();
    struct timeval  start;
    struct timeval  end;
    int h, w;
    getmaxyx(stdscr, h, w);
    GameElement* player = new GameElement(10, h / 2, 'P');
    player->next = NULL;
    head = player;
    tail = player;

    while (1) {
        gettimeofday(&start, NULL);

        clear();

        map->print();
        render_elements();

        int ch = getch();
        switch(ch) {
            case KEY_UP:
                player->move_y(-1);
            break;
            case KEY_DOWN:
                player->move_y(1);
            break;
            case KEY_RIGHT:
                player->move_x(1);
            break;
            case KEY_LEFT:
                player->move_x(-1);
            break;
            case ' ':
                tail->next = player->shoot();
                tail = tail->next;
                tail->next = NULL;
            break;
        }

        refresh();

        ticker++;
        if (ticker % 50 == 0)
            map->setOffset(map->getOffset() + 1);
        if (ticker % 100 == 0)
            ticker = 0;
        
        gettimeofday(&end, NULL);
        usleep((start.tv_sec * 1000 + start.tv_usec / 1000 + 1500) - 
            (end.tv_sec * 1000 + start.tv_usec / 1000));
        //usleep(500);
    }
}