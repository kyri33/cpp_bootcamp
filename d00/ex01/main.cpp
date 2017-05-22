#include "Contact.class.hpp"
#include <iostream>
#include <string.h>

void    check(Contact *contacts, int *total);

std::string    prompt_user(std::string prompt)
{
    std::string response;
    std::cout << prompt << std::endl;
    std::getline(std::cin, response);
    return (response);
}

void        ft_add(Contact *contacts, int *total)
{
    if (*total >= 8)
    {
        std::cout << "Address book full" << std::endl;
        check(contacts, total);
        return;
    }
    contacts[*total].firstName = prompt_user("Enter the first name of contact");
    contacts[*total].lastName = prompt_user("Enter the last name of the contact");
    contacts[*total].nickname = prompt_user("Enter the nickname of the contact");
    contacts[*total].login = prompt_user("Enter the login of the contact");
    contacts[*total].postal = prompt_user("Enter the postal address of the contact");
    contacts[*total].email = prompt_user("Enter the email address of the contact");
    contacts[*total].phone = prompt_user("Enter the phone number of the contact");
    contacts[*total].birthday = prompt_user("Enter the birthday date of the contact");
    contacts[*total].meal = prompt_user("Enter the contact's favourite meal");
    contacts[*total].underwear = prompt_user("Enter the underwear colour of the contact");
    contacts[*total].secret = prompt_user("Enter the contact's deepest darkest secret");
    *total += 1;
    check(contacts, total);
}

void    ft_search(Contact *contacts, int *total)
{
    if (*total == 0)
        std::cout << "No contacts to display" << std::endl;
    else
    {
        for (int i = 0; i < *total; i++)
            contacts[i].display_search(i + 1);
        int index;
        try {
            index = std::stoi (prompt_user("Enter the index of the contact you wish to see"));
        } catch (std::exception ex) {
            index = 0;
        }
        if (index >= 1 && index <= 8)
            contacts[index - 1].display_all();
        else
            std::cout << "Invalid index" << std::endl;
    }
    check(contacts, total);
}

void    check(Contact *contacts, int *total)
{
    std::string cmd = prompt_user("Please enter a command");
    if (cmd.compare("EXIT") == 0)
        exit (1);
    else if (cmd.compare("ADD") == 0)
        ft_add(contacts, total);
    else if (cmd.compare("SEARCH") == 0)
        ft_search(contacts, total);
    else
        check(contacts, total);
}

int     main(void)
{
    Contact contacts[8];
    int total = 0;
    check(contacts, &total);
    return (1);
}