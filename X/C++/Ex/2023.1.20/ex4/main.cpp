#include <iostream>

using namespace std;

int main()
{
    int n, i, v[100], S=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        if(i%2==1 && v[i]%7==0){
            S=S+v[i];
        }
    }
    cout << S;
    return 0;
}
