#include <iostream>

using namespace std;

int main()
{
    int n, k, j, i, v[25][25];
    cin >> n >> k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<k&&j<k){
                v[i][j]=1;
            }
            if(i>=k){
                v[i][j]=3;
            }
            if(j>=k){
                v[i][j]=2;
            }
            if(j>=k && i>=k){
                v[i][j]=4;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
