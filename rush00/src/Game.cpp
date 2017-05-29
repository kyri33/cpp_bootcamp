#include "Game.hpp"
#include <typeinfo>

Game::Game() {
    this->fps = 20;
    this->timePassed = 0;
    this->ticker = 1;
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

int     Game::add_enemy(int tick) {
    std::srand(std::time(0) + tick);
    if (tick == 0) {
        this->enemies = new Enemy(tick, _w, _h);
        enemies->prev = NULL;
        this->enemyTail = enemies;
        this->enemyTail->next = NULL;
    } else {
        enemyTail->next = new Enemy(tick, _w, _h);
        enemyTail->next->prev = enemyTail;
        enemyTail = enemyTail->next;
        enemyTail->next = NULL;
    }
    return std::rand();
}

bool    Game::handle_enemies(int tick, Enemy *temp) {
    GameElement *element;
    bool    collision = false;

    while (temp->alive == false)
        temp = temp->next;

    while (temp != NULL) {
        collision = false;
        element = head;
        while (element != NULL) {
            if (temp->getX() == element->getX() && temp->getY() == element->getY()) {
                collision = true;
                temp->alive = false;
                if (element->getVelocity() == 1) {
                    return true;
                }
            }
            element = element->next;
        }
        if (temp->alive)
            mvprintw(temp->getY(), temp->getX(), temp->getName());
        if (tick % 20 == 0)
            temp->move();
        temp = temp->next;
    }
    return false;
}

void    Game::start() {
    Map *map = new Map();
    struct timeval  start;
    struct timeval  end;
    getmaxyx(stdscr, _h, _w);
    Player* player = new Player();
    player->next = NULL;
    player->prev = NULL;
    head = player;
    tail = player;
    int enemyRand = add_enemy(0);
    curr = enemies;

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
                tail->next->prev = tail;
                tail = tail->next;
                tail->next = NULL;
            break;
        }

        if (handle_enemies(ticker, curr))
            return;

        if (ticker == enemyRand % 1000)
            enemyRand = add_enemy(ticker);
        refresh();

        ticker++;
        if (ticker % 50 == 0)
            map->setOffset(map->getOffset() + 1);
        if (ticker % 1000 == 0)
            ticker = 1;
        
        gettimeofday(&end, NULL);
        usleep((start.tv_sec * 1000 + start.tv_usec / 1000 + 1500) - 
            (end.tv_sec * 1000 + start.tv_usec / 1000));
        //usleep(500);
    }
}