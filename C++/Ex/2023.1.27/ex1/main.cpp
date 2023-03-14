#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, n, v[1000],np=0,ni=0,c;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        if(v[i]%2==0){
            np=np+1;
        } else {
            ni=ni+1;
        }
    }
    c=np-ni;
    cout << abs(c);
    return 0;
}
