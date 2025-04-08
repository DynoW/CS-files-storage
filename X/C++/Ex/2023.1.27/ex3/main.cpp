#include <iostream>

using namespace std;

int main()
{
    int i, n, v[1000],nmax=0,nmin=1000000,imin,imax;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        if(v[i]<nmin){
            nmin=v[i];
            imin=i;
        }
        if(v[i]>nmax){
            nmax=v[i];
            imax=i;
        }
    }

    cout << imin << " " << imax;
    return 0;
}
