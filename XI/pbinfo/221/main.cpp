#include <iostream>

using namespace std;

int main()
{
    int n, v[21][21], i, j, k=1;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((k*2)%3==0){
                k++;
            }
            v[i][j]=k*2;
            k++;
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
