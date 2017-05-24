#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class   Brain {
    public:
        Brain(void);
        Brain(std::string type);
        ~Brain(void);
        std::string type;
        std::string identify(void) const;
};

#endif