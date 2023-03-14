#include <iostream>

using namespace std;

int main()
{
    int i, n, v[100];
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        if(v[i]%2==0){
            cout << v[i] << " ";
        }
    }
    return 0;
}
