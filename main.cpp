#include <climits>
#include "tree.h"
#include "floor.h"

int main() {
    unsigned short choose = 0;
    Tree tree = Tree();
    Floor floor = Floor();
    while (choose < 10) {
        tree.clearScreen();
        tree.displayTree();
        floor.displayFloor();
        tree.displayMenu();
        cin >> choose;
        while (!cin.good()) {
            cin.clear();
            cin.ignore(SHRT_MAX, '\n');
            cin >> choose;
        }
        switch (choose) {
            case 1 :
                tree.addStar();
                break;
            case 2 :
                tree.addChains();
                break;
            case 3 :
                floor.addGift();
                break;
            case 4 :
                tree.addGlassBalls();
                break;
            case 5 :
                tree.addSweets();
                break;
            case 6 :
                tree.addLamps();
                break;
            case 9:
                floor.exportFloor(tree.exportTree());
                break;
            case 0:
                return 0;
            default:
                break;
        }
    }
}
