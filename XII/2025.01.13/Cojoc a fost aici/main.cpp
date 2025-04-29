#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void puncte(char cuv[20],int n){
cout<<cuv;
for(int i=0;i<n;i++){
    cout<<".";
}
}
int main()
{
    char fraza[220],*p;
    int n,ct,ct2;
    ifstream f("cuvinte.in");
    ofstream g("cuvinte.out");
    f.getline(fraza,220);

    p=strtok(fraza," ");
    while(p!=NULL){
        ct=0;
        ct2=0;
        n=strlen(p);
        //puncte(p,n);
        cout<<endl;
        ct=!strchr(p,'-');
        cout<<ct;
        ct2=!strchr("aeiou",p[0]);
        if(ct==1&&ct2==1){
           // g<<p<<" ";
           cout<<p<<" ";
        }

        p=strtok(NULL," ");
    }

    return 0;
}
