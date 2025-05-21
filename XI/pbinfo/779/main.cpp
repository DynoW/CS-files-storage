#include <iostream>

using namespace std;

int main()
{
    int a[102][102], i, j, m, n, ct=0;
    cin >> n >> m ;
    for(i=0;i<=n+1;i++){
        for(j=0;j<=m+1;j++){
            if(i==0 || j==0 || j==(m+1) || i==(n+1))
                a[i][j]=0;
            else
                cin >> a[i][j];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if((a[i-1][j]%2==0)&&(a[i][j+1]%2==0)&&(a[i][j-1]%2==0)&&(a[i+1][j]%2==0)){
                ct++;
            }
        }
    }
    cout << ct;

    return 0;
}
