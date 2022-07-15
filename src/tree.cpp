#include "../include/tree.h"
#include "../include/bigbranch.h"

Tree::Tree()
{
    _colBegbranch = 3 + rand() % 3;

    _bigbranch = new Bigbranch[_colBegbranch];

}

Tree::~Tree()
{
    delete[] _bigbranch;
}

int Tree::getSizeBigbranch()
{
    return _colBegbranch;
}

Bigbranch* Tree::getBigbranch()
{
    return _bigbranch;
}

