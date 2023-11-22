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

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[21];
    int i;
    cin.get(c, 21);
    cout << endl;
    for(i=0;i<strlen(c);i++){
        cout << c+i << endl;
    }
    cout << endl;
    int l=strlen(c);
    for(i=0;i<=l;i++){
        cout << c << endl;
        c[strlen(c)-1]=NULL;
    }
    return 0;
}
