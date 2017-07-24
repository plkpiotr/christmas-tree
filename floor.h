#ifndef floor_h
#define floor_h

#include "tree.h"

class Floor {
    static const int LENGTH = 6;
    string *tab;
    int gifts;
public:
    Floor();
    ~Floor();
    void displayFloor();
    void exportFloor(string card);
    void addGift();
};

#endif // floor_h
