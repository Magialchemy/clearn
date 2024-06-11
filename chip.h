#include <cstring>

using namespace std;

class Chip{
    int id;
    string name;
public:
    Chip(int i, string nm);
    void dump();
};