#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char f[101],*p;
    cin.get(f,101);
    int ct;
    p=strtok(f," ");
    ct=strlen(p);
    while (p!=NULL){
        if (ct>strlen(p))
            ct=strlen(p);
        p=strtok(NULL," ");
    }
    cout<<ct;
    return 0;
}