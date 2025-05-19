#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char f[101];
    int ct=0;
    cin.get(f,101);
    for(int i=0;i<strlen(f);i++)
        if (strchr("aeiou",f[i])!=NULL)
            ct=1;
    if (ct==1)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}


//to do citire de int