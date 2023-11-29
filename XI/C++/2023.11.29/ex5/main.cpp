#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char f[101], *c;
    int ok=0;
    cin.get(f,101);
    c=strtok(f," ");
    while(c!=NULL){
        int ct1=0;
        int ct2=0;
        for(int i=0;i<strlen(c);i++){
            if(strchr("aeiou",c[i])==NULL)
                ct1++;
            else
                ct2++;
        }
        if(ct1>ct2){
            ok=1;
            cout << c << endl;
        }
        c=strtok(NULL," ");
    }
    if(ok==0)
        cout << "nu exista";
    return 0;
}
