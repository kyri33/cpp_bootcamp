#include "Human.hpp"

void    Human::meleeAttack(std::string const & target) {
    std::cout << "Melee attacked " << target << std::endl;
}

void    Human::rangeAttack(std::string const & target) {
    std::cout << "Range attacked " << target << std::endl;
}

void    Human::intimidatingShout(std::string const & target) {
    std::cout << "Intimidatingly shouted at " << target << std::endl;
}

void    Human::action(std::string const & action_name, std::string const & target) {
    typedef void    (Human::*func)(std::string const & t);
    
    func funcs[] = {&Human::meleeAttack, &Human::rangeAttack, &Human::intimidatingShout};
    std::string attacks[3] = {"meleeAttack", "rangeAttack", "intimidatingShout"};
    for (int i = 0; i < 3; i++) {
        if (attacks[i].compare(action_name) == 0) {
            func caller = funcs[i];
            (this->*caller)(target);
        }
    }
}