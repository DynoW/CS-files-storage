#include <iostream>
using namespace std;

void frate(int x, int &y) {
    y = 0;
    int ogl = 0;
    while (x > 0 && y != -1) {
        if (x % 10 == 9)
            y = -1;
        else
            y = y * 10 + x % 10 + 1;
        x = x / 10;
    }
    if (y != -1) {
        while (y) {
            ogl = ogl * 10 + y % 10;
            y = y / 10;
        }
        y = ogl;
    }
}

int main() {
    int y;
    frate(1027, y);
    cout << y;
    return 0;
}