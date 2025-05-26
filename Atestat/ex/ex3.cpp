#include <iostream>
#include <fstream>
using namespace std;

int gaseste_cifra(int x, int c) {
    int ct = 0;
    while (x) {
        if (x % 10 == c) {
            ct++;
        }
        x /= 10;
    }
    return ct;
}

int main() {
    int nr, s = 0;
    ofstream g("control.out");
    cin >> nr;
    for (int i = 0; i <= 9; i++) {
        s = s * 10 + gaseste_cifra(nr, i);
    }
    g << s << endl;
    while (nr > 9) {
        s = 0;
        while (nr != 0) {
            s += nr % 10;
            nr /= 10;
        }
        nr = s;
    }
    g << nr;
    return 0;
}