#include <iostream>
#include <fstream>
using namespace std;

int cifre_pare(int x) {
    int s = 0;
    while (x) {
        if (x % 2 == 0) {
            s += x % 10;
        }
        x /= 10;
    }
    if (s == 0) {  // ce fac daca singura cifra para e 0?
        return -1;
    } else {
        return s;
    }
}

int main() {
    int n, max = -1, x, cv;
    ifstream f("suma.in");
    f >> n;
    for (int i = 0; i < n; i++) {
        f >> x;
        if (cifre_pare(x) != -1) {
            if (max < cifre_pare(x)) {
                max = cifre_pare(x);
                cv = x;
            }
        }
    }
    if (max == -1) {
        cout << "Nu exista";
    } else {
        cout << max << " " << cv;
    }
    return 0;
}