#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char f[71];
    cin.get(f,71);
    int ct=0;
    for(int i=0;i<strlen(f);i++)
     //if(strchr("0123456789",f[i])!=NULL)
     if(f[i]>='0'&&f[i]<='9')
     ct=ct+1;
    cout<<ct;
    return 0;
}