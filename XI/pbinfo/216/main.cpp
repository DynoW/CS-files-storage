#include <iostream>

using namespace std;

int main()
{
    int n, a[25][25], i, j;
    cin >> n;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j || i+j==n-1){
                a[i][j]=0;
            } else if(i<j&&i+j<n-1){
                a[i][j]=1;
            } else if(i>j&&i+j>n-1){
                a[i][j]=2;
            } else {
                a[i][j]=3;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
