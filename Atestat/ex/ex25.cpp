#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int majuscule(char s[]) {
    int ct = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            ct++;
        }
    }
    return ct;
}

int main() {
    ifstream fin("titlu.in");
    ofstream fout("titlu.out");
    char text[201], copie[201];
    int count_titluri = 0;
    bool exista_M = false;
    fin.getline(text, 201);
    strcpy(copie, text);
    char *p = strtok(text, "*");
    while (p != NULL) {
        if (majuscule(p) == 2) {
            count_titluri++;
        }
        p = strtok(NULL, "*");
    }
    cout << count_titluri << endl;
    p = strtok(copie, "*");
    while (p != NULL) {
        bool gasit_M = false;
        for (int i = 0; p[i] != '\0'; i++) {
            if (p[i] == 'M' || p[i] == 'm') {
                gasit_M = true;
                break;
            }
        }
        if (gasit_M) {
            fout << p << endl;
            exista_M = true;
        }
        p = strtok(NULL, "*");
    }
    if (!exista_M) {
        fout << "nu exista" << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
