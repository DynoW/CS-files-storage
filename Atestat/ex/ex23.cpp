#include <iostream>
#include <fstream>
using namespace std;

int prim(int a) {
    if (a < 2) return 0;
    if (a == 2) return 1;
    if (a % 2 == 0) return 0;
    for (int d = 3; d * d <= a; d += 2) {
        if (a % d == 0) return 0;
    }
    return 1;
}

int main() {
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int num, cur = 0, maxi = 0, ct_max = 0;
    while (fin >> num) {
        if (prim(num)) {
            cur++;
            if (cur > maxi) {
                maxi = cur;
                ct_max = 1;
            } else if (cur == maxi) {
                ct_max++;
            }
        } else {
            cur = 0;
        }
    }
    if (maxi == 0) {
        fout << 0;
    } else if (ct_max == 1) {
        fout << maxi;
    } else {
        fout << ct_max;
    }
    fin.close();
    fout.close();
    return 0;
}
