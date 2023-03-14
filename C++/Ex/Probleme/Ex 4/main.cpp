#include <iostream>

using namespace std;

int main()
{
    int S = 0, i,P = 1, n;
    cin >> n;
    for(i=1;i<=n;i++){
        S = S+i;
        P = P*i;
    }
    cout << S << " " << P;
    return 0;
}
