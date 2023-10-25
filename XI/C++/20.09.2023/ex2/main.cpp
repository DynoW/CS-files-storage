#include <iostream>
#include <fstream>
using namespace std;

/**
se citeste de la tast v cu n elem afis in date.out, elem v dupa eliminarea nr palindrom
**/

int main()
{
    int i, n, j, ogl, cp, v[100];
    ofstream g("date.out");
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        cp=v[i];
        ogl=0;
        while(cp){
            ogl=ogl*10+cp%10;
            cp=cp/10;
        }
        if(ogl==v[i]){
            for(j=i;j<n;j++){
                v[j]=v[j+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        g << v[i] << " ";
    }
    return 0;
}
