#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat def = Bureaucrat();
    Bureaucrat named = Bureaucrat("Tiffany", 150);
    try {
        named.decGrade();
    } catch (std::exception e) {
        
    }
    try {
        Bureaucrat thro = Bureaucrat("James", 0);
    } catch (std::exception e) {

    }
    std::cout << def << std::endl;
    def.incGrade();
}