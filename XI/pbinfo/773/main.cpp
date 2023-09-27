#include <iostream>

using namespace std;

int main()
{
    int a[100][100], i, j, m, n, ct, maxi, nap, l, k;
    cin >> n >> m ;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    maxi=0;
    ct=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            nap=0;
            for(l=0;l<n;l++){
                for(k=0;k<m;k++){
                    if(a[i][j]==a[l][k]){
                        nap++;
                    }}
                    if(ct<nap){
                        ct=nap;
                        maxi=a[i][j];
                    } if(ct == nap && maxi<a[i][j]){
                        maxi=a[i][j];
                    }
                }
            }

    }
    cout << maxi;
    return 0;
}
