#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char f[101], *c;
    int ct3=0;
    cin.get(f,101);
    int l=strlen(f);
    c=strtok(f," ");
    while(c!=NULL){
        int ct1=0,ct2=0;
        for(int i=0;i<strlen(c);i++){
            if(c[i]==',')
                ct1=1;
            if(c[i]>='0'&&c[i]<='9')
                ct2=1;
        }
        if(ct1==0&&ct2==1)
            ct3++;
        c=strtok(NULL," ");
    }
    cout << ct3;
    return 0;
}
