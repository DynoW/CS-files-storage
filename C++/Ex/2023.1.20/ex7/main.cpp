#include <iostream>

using namespace std;

int main()
{
    int n, i, v[100], S=0, P=1, i2, ct=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        for(i2=1;i2<=v[i];i2++){
            ct=ct+1;
        }
        if(ct==2){
            S=S+v[i];
            P=P*v[i];
        }
    }
    cout << S << " " << P;
    return 0;
}
