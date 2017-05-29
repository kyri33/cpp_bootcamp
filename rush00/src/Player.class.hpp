#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

#include "GameElement.class.hpp"

# define START_POSITION_X 0
# define  START_POSITION_Y 0
# define PLAYER "player1"

class Player : public GameElement {
    public:
        Player(void);
        Player(Player const & rhs);
        Player & operator=(Player const &);
        ~Player();
        GameElement*    shoot(void);
};

#endif