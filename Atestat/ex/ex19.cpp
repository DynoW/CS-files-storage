#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int num, max1 = -100000, max2 = -100000, ct1 = 0, ct2 = 0;
    if (fin >> num) {
        max1 = num;
        ct1 = 1;
    }
    while (fin >> num) {
        if (num > max1) {
            max2 = max1;
            ct2 = ct1;
            max1 = num;
            ct1 = 1;
        } else if (num == max1) {
            ct1++;
        } else if (num > max2) {
            max2 = num;
            ct2 = 1;
        } else if (num == max2) {
            ct2++;
        }
    }
    if (max2 == -100000) {
        fout << "numere identice";
    } else {
        fout << max1 << " " << ct1 << endl;
        fout << max2 << " " << ct2;
    }
    fin.close();
    fout.close();
    return 0;
}
