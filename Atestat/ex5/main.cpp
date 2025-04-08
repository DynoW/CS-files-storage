#include <iostream>
#include <fstream>
using namespace std;

int nrpare_p(int n, int v[100][100]) {
    int i, ct = 0;
    for (i = 0; i < n; i++) {
        if (v[i][i] % 2 == 0) {
            ct++;
        }
    }
    if (ct == 0) {
        return -1;
    } else {
        return ct;
    }
}

int nrpare_s(int n, int v[100][100]) {
    int i, ct = 0;
    for (i = 0; i < n; i++) {
        if (v[i][n-i-1] % 2 == 0) {
            ct++;
        }
    }
    if (ct == 0) {
        return -1;
    } else {
        return ct;
    }
}

int main() {
    int n, i, j, v[100][100];
    ifstream f("matrice.in");
    f >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            f >> v[i][j];
        }
    }
    if ((n-nrpare_p(n, v))+(n-nrpare_s(n, v))==0) {
        cout << "nu exista";
    } else if ((n-nrpare_p(n, v))+(n-nrpare_s(n, v))==2*(n+1)) {
        cout << 2*n;
    } else {
        cout << (n-nrpare_p(n, v))+(n-nrpare_s(n, v));
    }
    return 0;
}