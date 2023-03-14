#include <iostream>

using namespace std;

int main()
{
    int n, i, v[100], S, P=1, i2, ct=0,cop;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        cop=v[i];
        for(cop!=0){
            S=S+cop%10;
            cop=cop/10;
        }
        if(S%2==1){
            P=P*v[i];
        }
    }
    cout << S << " " << P;
    return 0;
}
