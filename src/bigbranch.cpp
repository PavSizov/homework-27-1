#include <cstdlib>
#include "../include/bigbranch.h"
#include "../include/branch.h"



Bigbranch::Bigbranch()
{
    _colbranch = 2 + rand()%2;
    _branch = new Branch[_colbranch];

}

Bigbranch::~Bigbranch()
{

    delete[] _branch;
}

int Bigbranch::getSizeBranch()
{
    return _colbranch;
}

Branch* Bigbranch::getBranch()
{
    return _branch;
}
