#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int p;
    char s[21];
    cin >> s;
    cout << endl;
    for(p=0;p<strlen(s);p++){
        if(s[p]=='A'&&s[p+1]=='I')
            continue;
        else
            cout << s[p];
    }
    return 0;
}