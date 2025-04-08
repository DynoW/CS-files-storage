#include <iostream>

using namespace std;

int cifra_min(int x) {
    int cmin = 9, c = 0;
    while (x != 0) {
        c = x % 10;
        if (cmin > c)
            cmin = c;
        x /= 10;
    }
    return cmin;
}

int main() {
    int n;
    cin >> n;
    cout << cifra_min(n);
    return 0;
}