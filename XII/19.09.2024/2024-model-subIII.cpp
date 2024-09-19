#include <iostream>
using namespace std;

int produs(int a, int b) {
    int prod = 1;
    int x = (a < b) ? b : a;
    for (int i = 1; i < x; i++) {
        if (a % i == 0 && b % i == 0) prod = prod * i;
    }
    return prod;
}

int main() {
    cout << produs(20, 12);
    return 0;
}