#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int cifre(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count++;
        }
    }
    return count;
}

int main() {
    ifstream fin("cifra.in");
    ofstream fout("cifra.out");
    char s[101], copie[101];
    char *p;
    bool exista = false;
    fin.getline(s, 101);
    strcpy(copie, s);
    p = strtok(s, " ,");
    while (p != NULL) {
        if (cifre(p) > 0) {
            cout << p << " ";
            exista = true;
        }
        p = strtok(NULL, " ,");
    }
    if (!exista) {
        cout << "nu exista";
    }
    cout << endl;
    p = strtok(copie, " ,");
    while (p != NULL) {
        if (p[0] >= 'a' && p[0] <= 'z') {
            p[0] = p[0] - ('a' - 'A');
        }
        fout << p << endl;
        p = strtok(NULL, " ,");
    }

    fin.close();
    fout.close();
    return 0;
}
