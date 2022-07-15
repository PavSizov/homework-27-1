#pragma once
#include <iostream>

class Bigbranch;

class Tree
{
    int _colBegbranch{0};
    Bigbranch* _bigbranch = nullptr;
public:
    Tree();
    ~Tree();
    int getSizeBigbranch();
    Bigbranch* getBigbranch();

};
