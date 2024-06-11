#pragma once
#include "ChainHash.h"
#include <cstdlib>
#include <iostream>

using namespace std;

ChainHash::ChainHash(int num)
{
    table = new Node*[num];
    size = num;
    for(int i = 0;i < size;i++)
        table[i] = nullptr;
}

int ChainHash::Search(Chip *x)
{
    return 0;
}

int ChainHash::Add(Chip *x)
{
    return 0;
}

int ChainHash::Remove(Chip *x)
{
    return 0;
}

void ChainHash::Dump()
{
}

void ChainHash::Clear()
{
}

ChainHash::~ChainHash()
{
}
