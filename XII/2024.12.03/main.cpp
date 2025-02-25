#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char a[256] = "ntza is my way 2 say hello", g[256];
    int i, ct=0;
    int len = strlen(a);
    strcpy(g,a);
    for (i = 0; i < len; i++) {
        if (strchr("aeiou", a[i])) {
            a[i] = (char)(a[i] + 1);
        }
        if (strchr("aeiou", a[i])) {
            ct++;
        }
    }

    cout << a;
    cout << endl;
    cout << ct;
    return 0;
}
