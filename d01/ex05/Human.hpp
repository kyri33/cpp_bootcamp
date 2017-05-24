#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human {
    public:
        std::string identify(void) const;
        const Brain&   getBrain(void);
    private:
        const Brain myBrain;
};

#endif