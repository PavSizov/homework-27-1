#pragma once
#include <string>

struct Address
{
    int _tree = -1;
    int _bigbranch = -1;
    int _branch = -1;
};

class House
{
    std::string _nameElf = "none";
    Address _address;

public:
    House();
    ~House();

    const char *getNameElf();
    House* getHouse();
    void setNameElf(const std::string& name);
    void setAddress(Address& address);
    Address* getAddress();
};