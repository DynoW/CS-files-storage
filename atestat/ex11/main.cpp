#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("vocale.in");
ofstream g("vocale.out");

void vocale(char*s, int&v) {
    for(int i=0;i<strlen(s);i++) {
        if(strchr("aeiouAEIOU",s[i])) {
            v++;
        }
    }
}

int main() {
    char text[81], *p;
    int ct=0;
    cin.get(text, 81);
    p=strtok(text, " ");
    while (p!=NULL) {
        int i=0;
        vocale(p,i);
        if(strlen(p)==i)
            ct++;
        if(strstr(p,"str"))
            g << p << endl;
        p=strtok(NULL, " ");
    }
    cout << ct;
    return 0;
}