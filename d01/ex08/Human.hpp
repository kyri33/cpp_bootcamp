#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>

class Human {
    public:
        void	action(std::string const & action_name, std::string const & target);
	private:
		void	meleeAttack(std::string const & target);
		void	rangeAttack(std::string const & target);
		void	intimidatingShout(std::string const & target);	
};

#endif
