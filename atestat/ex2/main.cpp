#include <iostream>
#include <fstream>
using namespace std;

int suma_x(int n, int a[100][100], int x) {
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += a[x][i];
    return s;
}

int main() {
    ifstream f("grade.in");
    int n, a[100][100] = {0}, x, y, max = 0, verif_n0 = 0;

    f >> n;
    while (f >> x && f >> y) {
        a[x][y] = 1;
        a[y][x] = 1;
    }

    for (int i = 1; i <= n; i++)
        if (suma_x(n, a, i) > suma_x(n, a, max))
            max = i;
    for (int i = 1; i <= n; i++)
        if (suma_x(n, a, i) == suma_x(n, a, max))
            cout << i << " ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        if (suma_x(n, a, i) == 0) {
            cout << i << " ";
            verif_n0 = 1;
        }
    if (verif_n0 == 0)
        cout << "nu exista";
    return 0;
}
