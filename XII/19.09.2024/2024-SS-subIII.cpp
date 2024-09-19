#include <iostream>
using namespace std;

int fulg(long long n) {
    if (n > 99999999 && n < 10000000000) {
        while (n != 0) {
            if (n % 10 != 1 || n % 10 != 2 || n % 10 != 3 || n % 10 != 4)
                return 0;
            n /= 10;
        }
        return 1;
    } else
        return 0;
}

int main() {
    cout << fulg(112253513);
    return 0;
}