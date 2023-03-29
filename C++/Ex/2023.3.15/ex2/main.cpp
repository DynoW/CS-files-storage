#include <iostream>

using namespace std;

int main()
{
    int n, i, i2, v[100], u;
    cin  >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
        u=v[i];
    }
    for(i=0;i<n;i++){
        if(v[i]%u==0){
            for(i2=i;i2<n-1;i2++){
                v[i2]=v[i2+1];
            }
            i--;
            n--;
        }
    }
    for(i=0;i<n;i++){
        for(i2=0;i2<n-1;i2++){
            if(v[i]>v[i2]){
                swap(v[i],v[i2]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
