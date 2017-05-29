#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("No Name"), _grade(1) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    _grade = grade;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Assignment constructor called " << name << " " << grade << std::endl;
    return;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called " << std::endl;
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) {
    std::cout << "Copy constructor called " << std::endl;
    *this = src;
    return;
}

Bureaucrat &    Bureaucrat::operator=(const Bureaucrat & src) {
    std::cout << "Assignment operator called " << std::endl;
    (void) src;
    return *this;
}

std::string     Bureaucrat::getName() const {
    return this->_name;
}

int             Bureaucrat::getGrade() const {
    return this->_grade;
}

void            Bureaucrat::incGrade() {
    this->_grade -= 1;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void            Bureaucrat::decGrade() {
    this->_grade += 1;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char*     Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char*     Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & src) {
    std::cout << src.getName() << ", bureaucrat grade " << src.getGrade()
        <<std::endl;
    return o;
}