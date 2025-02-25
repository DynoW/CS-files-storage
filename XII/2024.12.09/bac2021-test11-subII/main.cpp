#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int i;
    char x[20];
    strcpy(x,"bac2021");
    cout<<x+3<<endl;
    for(i=0;i<strlen(x);i++)
        if(strchr("0123456789",x[i])==0)
            cout<<x[i]<<'!';
}