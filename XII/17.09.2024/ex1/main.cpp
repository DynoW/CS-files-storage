#include <iostream>
using namespace std;

/*
Se citeste un vector cu n elem, adaugati dupa fiecare nr prim val 2024
*/

int prim(int nr) {
    int ct=0;
    for(int i=1;i<=nr;i++)
        if(nr%i==0)
            ct++;
    if(ct==2)
        return 1;
    else
        return 0;
}

int main()
{
    int v[100], i, j, n;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++)
        if(prim(v[i])==1) {
            for(j=n;j>=i+1;j--)
                v[j]=v[j-1];
            v[i+1]=2024;
            i++;
            n++;
        }
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}
