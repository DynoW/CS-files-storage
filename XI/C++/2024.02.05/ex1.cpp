#include <iostream>
using namespace std;
/*
a) prod nr de pe diag princ
b) suma nr de 3 cif de pe sec
*/
int n, a[100][100];

void citire(int i, int j) {
    if(i == 0 && j == 0) {
        cin >> n;
    }
    if(i < n) {
        if(j < n) {
            cin >> a[i][j];
            return citire(i, j + 1);
        } else {
            return citire(i + 1, 0);
        }
    }
}

int prim(int x, int d) {
    if(d < x) {
        if(x % d == 0) {
            return 1 + prim(x, d + 1);
        } else {
            return prim(x, d + 1);
        }
    } else
        return 0;
}

int dp(int i) {
    if(i < n) {
        if(prim(a[i][i], 2) == 0) {
            return a[i][i] * dp(i + 1);
        } else {
            return dp(i + 1);
        }
    } else {
        return 1;
    }
}

int ds(int i) {
    if(i < n) {
        if(a[i][n - i - 1] > 99 && a[i][n - i - 1] < 1000) {
            return a[i][n - i - 1] + ds(i + 1);
        } else {
            return ds(i + 1);
        }
    } else {
        return 0;
    }
}

int main() {
    citire(0, 0);
    cout << dp(0);
    cout << endl;
    cout << ds(0);
    return 0;
}