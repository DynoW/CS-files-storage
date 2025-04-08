#include <iostream>

using namespace std;

int main()
{
    int n,i,a,maxim=0,b,g;
    cin >> n;
    cin >> a;
    for(i=1;i<=n-1;i++){
        g=a;
        cin >> b;
        if(maxim < int(a-b))
            maxim = int(a-b);
        g=b;
    }
    cout << maxim;

    return 0;
}
