#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
    std::cout<<std::endl;
    delete b;
    std::cout << std::endl;

    ScavTrap    e;
    ScavTrap*   f = new ScavTrap("Scav Billy");
    ScavTrap    g = ScavTrap(*f);
    ScavTrap    h = ScavTrap("Scav Tommy Cino");

    e.rangedAttack("Scav Billy");
    f->takeDamage(e.getRangeDamage());
    f->meleeAttack("Scav Billy2");
    g.takeDamage(f->getMeleeDamage());
    g.challengeNewcomer("Scav Tommy Cino");
    h.beRepaired(10);
    g.challengeNewcomer("Scav Billy");
    std::cout << std::endl;
    delete f;
}