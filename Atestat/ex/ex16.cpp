#include <iostream>
#include <fstream>
using namespace std;

int nr_div(int a) {
    if (a == 1) return 0;

    int count = 0;
    for (int d = 2; d <= a/2; d++) {
        if (a % d == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    ifstream fin("divizori.in");
    int numar, max_div = -1, numar_max = -1;

    while (fin >> numar) {
        int divizori = nr_div(numar);
        if (divizori >= max_div) {
            max_div = divizori;
            numar_max = numar;
        }
    }

    cout << numar_max << endl;
    fin.close();
    return 0;
}
