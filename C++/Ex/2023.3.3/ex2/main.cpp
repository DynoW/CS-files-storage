#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k, v[100];
    cin >> n;
    cin >> k;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<k;i++){
        for(j=i+1;j<=k;j++){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    for(i=k;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
