#include <iostream>

/*
Se citeste un vector cu n elem. Eliminati in vector toate aparitile valorii maxime.
*/

using namespace std;

int main()
{
    int n, i, i2, v[100], maxim=0;
    cin  >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
        if(maxim<v[i]){
            maxim = v[i];
        }
    }
    for(i=0;i<n;i++){
        if(maxim==v[i]){
            for(i2=i;i2<n-1;i2++){
                v[i2]=v[i2+1];
            }
            i--;
            n--;
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
