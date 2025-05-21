#include <iostream>

using namespace std;

int main()
{
    int n, m, a[21][21], i, j, x=1;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            a[i][j]=x*x;
            x+=2;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
