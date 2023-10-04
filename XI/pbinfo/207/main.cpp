#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100], i, j;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=n-j;
        }
    }
    for(i=0;i<n;i++){
        a[i][i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
