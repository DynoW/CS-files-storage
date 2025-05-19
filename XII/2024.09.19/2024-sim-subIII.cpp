#include <iostream>
using namespace std;

int Impare(int n) {
    int x = 0;
    while (n != 0) {
        x = x * 10 + n % 10;
        if (n % 10 % 2 != 0) {
            x = x * 10 + n % 10;
        }
        n /= 10;
    }
    int ogl = 0;
    while (x != 0) {
        ogl = ogl * 10 + x % 10;
        x /= 10;
    }
    return ogl;
}

int main() {
    cout << Impare(3361);
    return 0;
}