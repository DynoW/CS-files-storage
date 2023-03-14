#include <iostream>

using namespace std;

int main()
{
    int n, i, v[100];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        if(v[i]%5==0){
            cout << v[i] <<" ";
        }
    }
    return 0;
}
