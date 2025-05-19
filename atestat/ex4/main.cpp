#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void puncte(char v[21], int n) {
    cout << v;
    for (int i = 0; i < n; i++) {
        cout << ".";
    }
}

int main() {
    char text[111], v = 0;
    ifstream f("cuvinte.in");
    ofstream g("cuvinte.out");
    f.getline(text, 111);
    char* c = strtok(text, " ");
    while (c != NULL) {
        puncte(c, strlen(c));
        cout << endl;
        if (strchr(c, '-') != NULL) {
            g << c << " ";
            v = 1;
        }
        c = strtok(NULL, " ");
    }
    if (v == 0) {
        g << "nu exista";
    }
    return 0;
}