#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

int consoane(char s[]) {
    int ct = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (isalpha(s[i]) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            ct++;
        }
    }
    return ct;
}

int main() {
    ifstream fin("consoane.in");
    ofstream fout("consoane.out");
    char text[91], cuvant[91];
    int max_consoane = 0;
    fin.getline(text, 91);
    char *p = strtok(text, " ");
    while (p != NULL) {
        strcpy(cuvant, p);
        int nr_consoane = consoane(cuvant);
        if (nr_consoane > max_consoane) {
            max_consoane = nr_consoane;
        }
        if (strlen(cuvant) % 2 == 0 && isupper(cuvant[0])) {
            fout << cuvant << endl;
        }
        p = strtok(NULL, " ");
    }
    cout << max_consoane << endl;
    if (fout.tellp() == 0) {
        fout << "nu exista" << endl;
    }
    fin.close();
    fout.close();
    return 0;
}