#pragma once
#include "chip.h"
#include <iostream>

using namespace std;

Chip::Chip(int i; string nm),id(i),name(nm)
{

}

void dump(){
    cout << "[" << id << "]" << nm;
}