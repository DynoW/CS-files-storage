#include <iostream>
#include <fstream>
using namespace std;

void secv_tablou(int n, int v[101], int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    ifstream fin("secventa_k.in");
    int n, k, v[101], pozitii_k[101], m = 0;
    cin >> k;
    fin >> n;
    for (int i = 1; i <= n; i++) {
        fin >> v[i];
        if (v[i] == k) {
            pozitii_k[++m] = i;
        }
    }
    if (m < 2) {
        cout << "imposibil";
        return 0;
    }
    for (int i = 1; i < m; i++) {
        for (int j = i + 1; j <= m; j++) {
            secv_tablou(n, v, pozitii_k[i], pozitii_k[j]);
        }
    }
    fin.close();
    return 0;
}
