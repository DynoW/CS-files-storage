#include <iostream>

using namespace std;

int main()
{
    int n, v[1001], i, mi=1000, ma=1, minp=0, maxp=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        if(ma<v[i]){
            ma=v[i];
            maxp=i;
        }
        if(mi>v[i]){
            mi=v[i];
            minp=i;
        }
    }
    for(i=(minp<maxp?minp:maxp);i<=(minp>maxp?minp:maxp);i++){
        cout << v[i] << " ";
    }
    return 0;
}
