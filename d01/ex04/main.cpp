#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    std::cout << "Printing pointer: " << *ptr << std::endl;
    std::cout << "Printing reference: " << ref << std::endl;
}