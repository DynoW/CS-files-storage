#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[21];
    int p;
    cin.get(s,21);
    for(p=0;p<strlen(s);p++){
        if('A'==s[p]&&'I'==s[p+1])
            strcpy(s+p,s+p+1);
        if('I'==s[p]&&'A'==s[p+1])
            strcpy(s+p+1,s+p+2);
    }
    cout << s;

    return 0;
}
