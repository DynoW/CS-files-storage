/*
a)bacalaureat
acalaureat
calaureat
...
t

b)bacalaureat
bacalaurea
bacalaure
...
b

c)bacalaureat
acalaurea
calaure
...
a
*/

#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char c[21], cp[21];
    int i, l;
    cin.get(c, 21);
    strcpy(cp, c);
    cout << endl;
    for(i = 0; i < strlen(c); i++) {
        cout << c + i << endl;
    }
    cout << endl;
    l = strlen(c);
    for(i = 0; i < l; i++) {
        cout << c << endl;
        c[strlen(c) - 1] = NULL;
    }
    cout << endl;
    for(i = 0; i <= l/2; i++) {
        cout << cp + i << endl;
        cp[strlen(cp) - 1] = NULL;
    }
    return 0;
}
