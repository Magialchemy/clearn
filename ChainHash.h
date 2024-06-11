#pragma once
#include "chip.h"

using namespace std;

struct Node{
    Chip data;
    Node *next;
};

class ChainHash{
    int size;
    Node **table;
public:
    ChainHash(int num);
    int Search(Chip *x);
    int Add(Chip *x);
    int Remove(Chip *x);
    void Dump();
    void Clear();
    ~ChainHash();
};