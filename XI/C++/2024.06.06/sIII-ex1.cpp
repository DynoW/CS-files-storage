#include <iostream>
using namespace std;

int factori(int n, int m) {
    int d = 2;
    int ct= 0;
    while (n != 1) {
        int p = 0;
        while (n % d == 0) {
            n = n / d;
            p++;
        }
        if (p) {
            if(m%d==0)
                ct++;
        }
        d++;
    }
    return ct;
}

int main() {
    cout << factori(750, 490);
    return 0;
}