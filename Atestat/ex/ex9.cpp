#include <iostream>
#include <fstream>
using namespace std;

int oglinda(int x) {
    int ogl = 0;
    while (x > 0) {
        ogl = ogl * 10 + x % 10;
        x /= 10;
    }
    return ogl;
}

int main() {
    int a, b;
    cin >> a >> b;
    ofstream g("palindrom.out");
    int primul = 1;
    for (int i = a; i <= b; ++i) {
        if (i == oglinda(i)) {
            if (primul) {
                g << i;
                primul = 0;
            } else {
                g << " " << i;
            }
        }
    }
    g << endl;
    int k;
    cin >> k;
    if (k == oglinda(k)) {
        g << "palindrom";
    } else {
        int next = k + 1;
        while (next != oglinda(next)) {
            next++;
        }
        g << next;
    }
    return 0;
}