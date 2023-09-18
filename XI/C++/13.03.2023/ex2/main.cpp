#include <iostream>
using namespace std;

/**
se citeste un vector cu n elem, inlocuiti in vector fiecare nr palindrom cu nr sau de cifre
**/

int main()
{
    int  n, v[100], i, cp, cont, ogl;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        cp=v[i];
        ogl=0;
        cont=0;
        while (cp!=0){
            ogl=ogl*10+cp%10;
            cp=cp/10;
        }
        if(ogl==v[i]){
            while(ogl!=0){
                ogl=ogl/10;
                cont++;
            }
            cout << cont << " ";
        } else {
            cout << v[i] << " ";
        }
    }
    return 0;
}
