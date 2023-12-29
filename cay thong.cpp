#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawTree(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    gotoxy(height - 1, height);
    cout << "| |" << endl;
}

int main() {
    int treeHeight = 10; 
    drawTree(treeHeight);
    cout << "Merry Chirsmarts" << endl;
    cout << "Nguyen Thi Quynh Trang" << endl;
    return 0;
}
