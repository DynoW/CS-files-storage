#include <iostream>

using namespace std;

int main()
{
    int i, n, v[1000],nmax=0,nmin=1000000,ct=0,c;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        if(v[i]<nmin){
            nmin=v[i];
        }
        if(v[i]>nmax){
            nmax=v[i];
        }
    }
    c=nmax-nmin;
    for(i=1;i<=n;i++){
        if(c==v[i]){
            ct=ct+1;
        }
    }
    cout << ct;
    return 0;
}
