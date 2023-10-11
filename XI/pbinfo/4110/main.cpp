#include <iostream>

using namespace std;

int main()
{
    int n, v[1001], i, j, c=0, k, v1[1001], sd=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        sd =0;
        for(k=1;k*k<v[i];k++){
            if(v[i]%k==0)
                sd=sd+k+v[i]/k;
            if(k*k==v[i]){
                sd=sd+k;
            }
        }
        v1[i]=sd;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(v1[i]==v1[j])
                c++;
    }
    cout << c;
    return 0;
}
