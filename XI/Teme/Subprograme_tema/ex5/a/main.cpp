#include <iostream>
using namespace std;

int cif_impare(int n){
    while(n){
        if(n%2==0)
            return 0;
        n/=10;
    }
    return 1;
}

int main(){
    int n, i, v[100];
    cin >> n;
    for(i=0;i<n;i++)
        cin >> v[i];
    for(i=n-1;i>=0;i--)
        if(cif_impare(v[i])==1){
            cout << v[i];
            break;
        }

    return 0;
}