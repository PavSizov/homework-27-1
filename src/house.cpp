#include "../include/house.h"


House::House()
{

}

House::~House()
{

}

House* House::getHouse()
{
    return this;
}

const char * House::getNameElf()
{
    return _nameElf.c_str();
}

void House::setNameElf(const std::string& name)
{
    _nameElf = name;
}

void House::setAddress(Address& address)
{
    _address = address;
}

Address* House::getAddress()
{
    return &_address;
}
