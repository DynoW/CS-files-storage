#include <iostream>
#include <fstream>
using namespace std;

int linie_x(int n, int a[101][101], int x) {
    int cnt = 0;
    for (int j = 1; j <= n; j++) {
        if (a[x][j] != 0) {
            cnt++;
        }
    }
    return cnt;
}

int coloana_x(int n, int a[101][101], int x) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i][x] != 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    ifstream f("graf.in");
    int n, a[101][101] = {0}, x, y, nr_arce = 0;
    f >> n;
    while (f >> x >> y) {
        a[x][y] = 1;
        nr_arce++;
    }
    bool exista = false;
    for (int i = 1; i <= n; i++) {
        int grad_exterior = linie_x(n, a, i);
        int grad_interior = coloana_x(n, a, i);
        if (grad_exterior == grad_interior) {
            cout << i << " ";
            exista = true;
        }
    }
    if (!exista) {
        cout << "nu exista";
    }
    cout << endl << nr_arce;
    return 0;
}