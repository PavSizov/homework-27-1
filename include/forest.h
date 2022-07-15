#pragma once
#include <vector>
#include <string>

class Forest
{

    int _size{0};

    class Tree* _tree = nullptr;

    std::vector<class House*> _home;
    void setHouse();
    int numberOFneighbors(struct Address& address);
public:
    Forest(int size = 5);
    ~Forest();
    void setNameElf();
    void printElfName();
    void findElf(const std::string& name);
};