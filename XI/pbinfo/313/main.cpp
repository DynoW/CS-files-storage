#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100], i, j, s1=0, s2=0, d;
    cin >> n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(i==j){
                s1=s1+v[i][j];
            }
            if(i+j==n-1){
                s2=s2+v[i][j];
            }
        }
    if(s2>s1)
        d=s2-s1;
    else
        d=s1-s2;

    cout << d;

    return 0;

    }
