#include "floor.h"

Floor::Floor() {
    tab = new string[LENGTH];
    for (int i = 0; i < LENGTH; i++)
        tab[i] = ' ';
    gifts = 0;
}

Floor::~Floor() {
    delete[] tab;
}

void Floor::displayFloor() {
    for (int i = 0; i < LENGTH; i++) {
        cout << tab[i];
        cout << endl;
    }
}

void Floor::addGift() {
    if (gifts == 3) {
        cout << "You can put only three gifts under the tree... [ENTER]" << endl;
        getchar();
        getchar();
    } else {
        tab[0] += string(6, ' ') + '_' + string(3, ' ') + '_' + string(9, ' ');
        tab[1] += string(5, '  ') + "((\\o/))" + string(8, ' ');
        tab[2] += '.' + string(5, '-') + "//" + '^' + "\\\\" + string(5, '-') + '.' + string(3, ' ');
        tab[3] += '|' + string("For:") + "/ | | \\" + string(4, ' ') + '|' + string(3, ' ');
        tab[4] += '|' + string(6, ' ') + "| |" + string(6, ' ') + '|' + string(3, ' ');
        tab[5] += '\'' + string(6, '-') + string(3, '=') + string(6, '-') + '\'' + string(3, ' ');
        string name;
        cout << "This present will be for: ";
        cin.ignore();
        getline(cin, name);
        while (name.size() > 6) {
            cout << "Inscription on gift may have a maximum six letters, try again: ";
            getline(cin, name);
        }
        while (name.size() < 6)
            name += ' ';
        tab[4].replace(2 + gifts * 20, 6, name);
        gifts++;
    }
}

void Floor::exportFloor(string card) {
    fstream file;
    file.open(card, ios::app);
    for (int i = 0; i < LENGTH; i++) {
        file << tab[i] << endl;
    }
    file.close();
}
