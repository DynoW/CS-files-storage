#include <iostream>
/**
Se citeste o matrice nxm afs indicii de linie, care incep cu un nr prim
**/
using namespace std;

int main()
{
    int n, m, v[100][100], i, j, cp, ct;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    for(i=0;i<n;i++){
        ct=0;
        for(j=1;j<=v[i][0];j++){
            if(v[i][0]%j==0){
               ct++;
            }
        }
        if(ct==2){
            cout << i << " ";
        }
    }
    return 0;
}
