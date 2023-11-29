#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char f[101], *c;
    cin.get(f,101);
    int l=strlen(f);
    c=strtok(f," ");
    while(c!=NULL){
        if(c[0]!='-')
            cout << c << " ";
        c=strtok(NULL," ");
    }
    return 0;
}
