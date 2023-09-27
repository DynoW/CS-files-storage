#include <iostream>

using namespace std;

int main()
{
    int a[100][100], i, j, m, n, x ,OK=0;
    cin >> n >> m ;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cin >> x;
    for(j=0;j<m;j++){
        if(x==a[0][j])
            OK=1;
    }
    for(i=1;i<n;i++){
        if(x==a[i][m-1])
            OK=1;
    }
    for(j=m-1;j>0;j--){
        if(x==a[n-1][j])
            OK=1;
    }
    for(i=n-1;i>0;i--){
        if(x==a[i][0])
            OK=1;


    }
    if(OK==1){
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
