#include <iostream>
#include <fstream>
using namespace std;

int pozitie(int n, int v[101], int x) {
    for (int i = 1; i <= n; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    ifstream fin("arbore.in");
    int n, t[101], fii[101] = {0}, max_fii = 0;
    fin >> n;
    for (int i = 1; i <= n; i++) {
        fin >> t[i];
    }
    int radacina = pozitie(n, t, 0);
    cout << radacina << endl;
    for (int i = 1; i <= n; i++) {
        if (t[i] != 0) {
            fii[t[i]]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (fii[i] > max_fii) {
            max_fii = fii[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (fii[i] == max_fii) {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        if (fii[i] == 0 && i != radacina) {
            cout << i << " ";
        }
    }
    fin.close();
    return 0;
}
