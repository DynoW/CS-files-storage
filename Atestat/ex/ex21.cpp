#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int nr_div(int a) {
    if (a == 1) return 1;
    int ct = 2;
    for (int d = 2; d * d <= a; d++) {
        if (a % d == 0) {
            if (d * d == a) ct++;
            else ct += 2;
        }
    }
    return ct;
}

bool este_patrat_prim(int n) {
    int rad = sqrt(n);
    return (rad * rad == n) && (nr_div(rad) == 2);
}

int main() {
    ofstream fout("patrate.out");
    int num;
    bool exista = false;
    while (cin >> num && num != 1) {
        if (este_patrat_prim(num)) {
            fout << sqrt(num) << " ";
            exista = true;
        }
    }
    if (!exista) {
        fout << "nu exista";
    }
    fout.close();
    return 0;
}
