#include <iostream>

using namespace std;

int main()
{
    int n, i, j, v[100];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
        if(v[i]%5==0){
            for(j=i;j<n-1;j++){
                v[j]=v[j+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
