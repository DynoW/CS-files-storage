#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char q[20][21];
    int n, k, i;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> q[i];
    }
    for(i<0;i<n;i++){
        if(strcmp(q[i]+strlen(q[i])-strlen(q[k]), q[k])==0)
            cout << q[i] << " ";
    }
    return 0;
}
