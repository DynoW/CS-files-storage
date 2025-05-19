/*fraza cu max 256 caract, afis cuv form din 3 caractere*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char f[257], *p;
    cin.get(f,257);
    p=strtok(f, " ");
    while(p!=NULL){
        if(strlen(p)==3)
            cout << p << endl;
        p=strtok(NULL, " ");
    }
    return 0;
}
