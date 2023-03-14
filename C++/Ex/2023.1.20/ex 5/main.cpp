#include <iostream>

using namespace std;

int main()
{
    int n, i, v[100], S=0, P=1;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        S=S+v[i];
        P=P*v[i];
    }
    cout << S << " " << P;
    return 0;
}
