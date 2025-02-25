#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100], i, j, S=0;
    cin >> n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(j+1==i || j-1==i)
                S=S+v[i][j];

    cout << S;

    return 0;

}
