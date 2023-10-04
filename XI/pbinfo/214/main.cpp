#include <iostream>

using namespace std;

int main()
{
    int n, a[10][10], i, j, ct, ogl, cop;
    cin >> n;
    ogl=n;
    while(n!=0){
        ct++;
        n=n/10;
    }
    for(i=0;i<ct;i++){
        cop=ogl;
        for(j=0;j<ct;j++){
            a[i][j]=cop%10;
            cop=cop/10;
        }
    }

    for(i=0;i<ct;i++){
        for(j=0;j<ct;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
