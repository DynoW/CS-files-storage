#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[40][40];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int col = (i % 2 == 0) ? j : (n - 1 - j);
            mat[i][j] = (i + col) % 3;
        }
    }
    ofstream fout("mat.out");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fout << mat[i][j] << " ";
        }
        fout << endl;
    }
    fout.close();
    return 0;
}