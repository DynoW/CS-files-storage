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
        if(i%2==1){
            cout << v[i] << " ";
        }
    }
    return 0;
}
