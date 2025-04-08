#include <iostream>

using namespace std;

int suma_cif(int x) {
    int s = 0;
    while (x != 0) {
        s = s + x % 10;
        x = x / 10;
    }
    return s;
}

int main() {
    int x;
    cin >> x;
    cout << suma_cif(x);
    return 0;
}