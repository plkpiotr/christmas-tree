#ifndef tree_h
#define tree_h

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Tree {
    static const int LENGTH = 25;
    string *tab;
public:
    Tree();
    ~Tree();
    void displayTree();
    string exportTree();
    void addChains();
    void addStar();
    void addSweets();
    void addGlassBalls();
    void addLamps();
    void displayMenu();
    void clearScreen();
};

#endif // tree_h
