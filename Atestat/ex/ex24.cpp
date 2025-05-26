#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int numar_cifre(int x) {
    if (x == 0) return 1;
    int ct = 0;
    while (x != 0) {
        ct++;
        x /= 10;
    }
    return ct;
}

int extrem(int b) {
    int nc = numar_cifre(b);
    if (b % 2 == 0) {
        return pow(10, nc) - 1;
    } else {
        return pow(10, nc - 1);
    }
}

int main() {
    ifstream fin("extrem.in");
    int b;
    while (fin >> b) {
        int a = extrem(b);
        if (b % 2 == 0) {
            cout << b << ".." << a << endl;
        } else {
            cout << a << ".." << b << endl;
        }
    }
    fin.close();
    return 0;
}
