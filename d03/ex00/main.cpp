#include "FragTrap.hpp"

int     main(void) {
    FragTrap    a;
    FragTrap*   b = new FragTrap("Billy");
    FragTrap    c = FragTrap(*b);
    FragTrap    d = FragTrap("Tommy Cino");

    a.rangedAttack("Billy");
    b->takeDamage(a.getRangeDamage());
    b->meleeAttack("Billy2");
    c.takeDamage(b->getMeleeDamage());
    c.vaulthunter_dot_exe("Tommy Cino");
    d.beRepaired(10);
    c.vaulthunter_dot_exe("Tommy Cino");
    c.vaulthunter_dot_exe("Billy2");
    c.vaulthunter_dot_exe("No Name");
    c.vaulthunter_dot_exe("NoName");
    delete b;
}