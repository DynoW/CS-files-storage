#include <iostream>
#include <fstream>
using namespace std;

struct clipa {
    int sec, mi, ora;
};

void timp(clipa c) {
    if (c.ora < 10) cout << "0";
    cout << c.ora << ":";
    if (c.mi < 10) cout << "0";
    cout << c.mi << ":";
    if (c.sec < 10) cout << "0";
    cout << c.sec << endl;
}

int main() {
    ifstream fin("clipa.in");
    int n;
    clipa momente[20], max_clipa = {0, 0, 0};
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> momente[i].ora >> momente[i].mi >> momente[i].sec;
        timp(momente[i]);
        int distanta = (23 - momente[i].ora) * 3600 +
                      (59 - momente[i].mi) * 60 +
                      (59 - momente[i].sec);

        int max_dist = (23 - max_clipa.ora) * 3600 +
                      (59 - max_clipa.mi) * 60 +
                      (59 - max_clipa.sec);
        if (distanta < max_dist) {
            max_clipa = momente[i];
        }
    }
    timp(max_clipa);
    fin.close();
    return 0;
}
