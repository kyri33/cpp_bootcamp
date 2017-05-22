#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string.h>

class Contact {
    public:
        std::string     firstName;
        std::string     lastName;
        std::string     nickname;
        std::string     login;
        std::string     postal;
        std::string     email;
        std::string     phone;
        std::string     birthday;
        std::string     meal;
        std::string     underwear;
        std::string     secret;
        Contact(void);
        void    display_column(std::string val);
        void    display_search(int index);
        void    display_all();

};

#endif