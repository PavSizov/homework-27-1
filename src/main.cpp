#include <iostream>
#include "../include/forest.h"

int main()
{
    Forest test(1);
    test.setNameElf();
    test.printElfName();
    std::string name;
    std::cout<<"Enter name found: ";
    getline(std::cin, name);
    test.findElf(name);
    return 0;
}