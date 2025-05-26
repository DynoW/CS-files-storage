#include <iostream>
#include <fstream>
using namespace std;

void tablou(int &n, int v[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

int main() {
    int na, nb;
    int a[100], b[100];
    ofstream fout("comune.out");
    tablou(na, a);
    tablou(nb, b);
    bool exista = false;
    int i = 0, j = nb - 1;
    while (i < na && j >= 0) {
        if (a[i] == b[j]) {
            if (exista) {
                fout << " ";
            }
            fout << a[i];
            exista = true;
            i++;
            j--;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j--;
        }
    }
    if (!exista) {
        fout << "nu exista";
    }
    fout.close();
    return 0;
}
