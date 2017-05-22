#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {
    return;
}

void    Contact::display_column(std::string val)
{
    if (val.length() > 10) {
        val = val.substr(0, 9) + ".";
    } else {
        int skip = 10 - (val.length() % 10);
        for (int i = 0; i < skip; i++)
            std::cout << " ";
    }
    std::cout << val;
    std::cout << "|";
}

void    Contact::display_search(int index)
{
    display_column(std::to_string(index));
    display_column(this->firstName);
    display_column(this->lastName);
    display_column(this->nickname);
    std::cout << std::endl;
}

void    Contact::display_all()
{
    std::cout << this->firstName << std::endl;
    std::cout << this->lastName << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->login << std::endl;
    std::cout << this->postal << std::endl;
    std::cout << this->email << std::endl;
    std::cout << this->phone << std::endl;
    std::cout << this->birthday << std::endl;
    std::cout << this->meal << std::endl;
    std::cout << this->underwear << std::endl;
    std::cout << this->secret << std::endl;
}