/*afis cuv care se termina si incep cu aceeasi litera*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char f[256], *p;
    cin.get(f, 256);
    p=strtok(f, " ");
    while(p!=NULL){
        if(p[0]==p[strlen(p)-1])
            cout << p << endl;
        p=strtok(NULL, " ");
    }
    return 0;
}
