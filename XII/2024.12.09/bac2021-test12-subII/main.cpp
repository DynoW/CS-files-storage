#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i;
    char s[20]="CALCULATOARE";
    for(i=0;i<strlen(s);i++)
        if(strchr("OAU", s[i]))
            cout << '*';
        else
            cout<<s[i];
    return 0;
}