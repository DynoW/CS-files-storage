#include <iostream>

using namespace std;

void div_p(int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    div_p(n);
    return 0;
}