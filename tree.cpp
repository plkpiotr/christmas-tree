#include "tree.h"

Tree::Tree() {
    tab = new string[LENGTH];
    tab[0] = string(27, ' ');
    tab[1] = string(18, ' ') + '|';
    tab[2] = string(17, ' ') + "/ \\";
    int spaceOutside = 16;
    int spaceInside = 3;
    for (int i = 0; i < 21; i += 3, spaceOutside -= 2, spaceInside += 4) {
        tab[i + 3] = string(spaceOutside, ' ') + '/' + string(spaceInside, ' ') + '\\';
        tab[i + 4] = string(spaceOutside - 1, ' ') + '/' + string(spaceInside + 2, ' ') + '\\';
        tab[i + 5] = string(spaceOutside - 2, ' ') + "/_" + string(spaceInside + 2, ' ') + "_\\";
    }
    tab[23] = string(2, ' ') + '/' + string(31, ':') + '\\';
    tab[24] = string(14, ' ') + '\\' + string(6, '_') + '/';
}

Tree::~Tree() {
    delete[] tab;
}

void Tree::displayTree() {
    cout << endl;
    for (int i = 0; i < LENGTH; i++) {
        cout << setw(10) << " " << tab[i] << endl;
    }
}

string Tree::exportTree() {
    string card;
    cout << "Export to text file..." << endl;
    cout << "Name of Christmas card: ";
    cin >> card;
    card += ".txt";
    cout << "Remember monospaced font while sending Christmas card someone... [ENTER]" << endl;
    getchar();
    getchar();
    fstream file;
    file.open(card, ios::out);
    for (int i = 0; i < LENGTH; i++) {
        file << string(10, ' ') + tab[i] << endl;
    }
    file.close();
    return card;
}

void Tree::addChains() {
    int level;
    cout << "What height (1-7) would you like put chains?: " << endl;
    do {
        cin >> level;
    } while (level < 1 || level > 7);
    switch (level) {
        case 1:
            tab[4][20] = tab[5][17] = '~';
            tab[4][19] = tab[5][16] = '.';
            tab[5][18] = '"';
            break;
        case 2:
            tab[7][18] = tab[8][21] = '~';
            tab[6][16] = tab[7][19] = tab[8][22] = '.';
            tab[6][15] = tab[7][17] = tab[8][20] = '"';
            break;
        case 3:
            tab[11][14] = tab[11][15] = tab[10][19] = tab[10][20] = tab[9][22] = '~';
            tab[11][12] = tab[11][13] = tab[10][18] = '.';
            tab[11][16] = tab[11][17] = tab[10][21] = tab[9][23] = '"';
            break;
        case 4:
            tab[13][17] = tab[13][18] = tab[14][23] = tab[14][24] = '~';
            tab[12][13] = tab[12][14] = tab[13][19] = tab[13][20] = tab[14][25] = tab[14][26] = '.';
            tab[12][12] = tab[13][15] = tab[13][16] = tab[14][21] = tab[14][22] = '"';
            break;
        case 5:
            tab[17][10] = tab[17][11] = tab[16][16] = tab[16][17] = tab[16][18] = tab[15][24] = tab[15][25] = '~';
            tab[17][8] = tab[17][9] = tab[16][14] = tab[16][15] = tab[15][22] = tab[15][23] = '.';
            tab[17][12] = tab[17][13] = tab[16][19] = tab[16][20] = tab[16][21] = tab[15][26] = tab[15][27] = '"';
            break;
        case 6:
            tab[18][10] = tab[18][11] = tab[18][12] = tab[19][18] = tab[19][19] = tab[20][26] = tab[20][27] = '~';
            tab[18][13] = tab[18][14] = tab[19][20] = tab[19][21] = tab[19][22] = tab[20][28] = tab[20][29] = tab[20][30] = '.';
            tab[18][8] = tab[18][9] = tab[19][15] = tab[19][16] = tab[19][17] = tab[20][23] = tab[20][24] = tab[20][25] = '"';
            break;
        case 7:
            tab[23][7] = tab[23][8] = tab[23][9] = tab[22][16] = tab[22][17] = tab[22][18] = tab[21][25] = tab[21][26] = tab[21][27] = '~';
            tab[23][4] = tab[23][5] = tab[23][6] = tab[22][13] = tab[22][14] = tab[22][15] = tab[21][22] = tab[21][23] = tab[21][24] = '.';
            tab[23][10] = tab[23][11] = tab[23][12] = tab[22][19] = tab[22][20] = tab[22][21] = tab[21][28] = tab[21][29] = tab[21][30] = '"';
            break;
    }
}

void Tree::addStar() {
    tab[0].replace(16, 5, "_.|._");
    tab[1].replace(16, 3, " '|' ");
}

void Tree::addGlassBalls() {
    tab[21][11] = tab[15][11] = tab[9][16] = tab[4][18] = tab[20][18] = tab[6][21] = tab[11][23] = tab[19][27] = 'o';
}

void Tree::addSweets() {
    tab[22][7] = tab[19][9] = tab[10][14] = tab[7][15] = tab[12][22] = tab[14][16] = tab[17][23] = tab[22][28] = 'J';
}

void Tree::addLamps() {
    tab[5][14] = tab[8][12] = tab[11][10] = tab[14][8] = tab[17][6] = tab[20][4] = '!';
    tab[5][22] = tab[8][24] = tab[11][26] = tab[14][28] = tab[17][30] = tab[20][32] = '!';
}

void Tree::displayMenu() {
    cout << endl << endl << "[1] -> Decorate the tree with star" << endl;
    cout << "[2] -> Decorate the tree with chains" << endl;
    cout << "[3] -> Give gifts to loved ones under the tree" << endl;
    cout << "[4] -> Hang glass balls on the tree" << endl;
    cout << "[5] -> Hang candies on the tree" << endl;
    cout << "[6] -> Turn on the lights" << endl;
    cout << "[9] -> Export to text file" << endl;
    cout << "[0] -> Exit" << endl;
    cout << "Your choice: ";
}

#if defined _WIN32 || defined _WIN64

#include <windows.h>
void Tree::clearScreen() {
    system("cls");
}

#else

#include <cstdio>

void Tree::clearScreen() {
    printf("\033[2J"); // screen
    printf("\033[0;0f"); // cursor
}

#endif
