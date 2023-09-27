#include <iostream>

using namespace std;

int main()
{
    int n, m, v[100][100], i, j, s;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    for(i=0;i<n;i++){
        s=0;
        for(j=0;j<m;j++){
            s=s+v[i][j];
        }
        cout << s << " ";
    }
    return 0;
}
