#include <iostream>
#include <fstream>
using namespace std;

ifstream f("graf.in");

int linie_x(int n, int a[100][100], int x) {
    int ct = 0;
    for (int j = 1; j <= n; j++)
        if (a[x][j] != 0)
            ct += a[x][j];
    return ct;
}

int coloana_x(int n, int a[100][100], int x) {
    int ct = 0;
    for (int i = 1; i <= n; i++)
        if (a[i][x] != 0)
            ct += a[i][x];
    return ct;
}

int main() {
    int n, i, j, a[100][100], ct = 0;
    cin >> n;
    for(int k=0;k<n;k++) {
        cin >> i;
        cin >> j;
        a[i][j] = 1;
    }
    for(int x=1;x<=n;x++) 
            if(linie_x(n,a,x)==coloana_x(n,a,x))
                cout<<x<<" ";
    cout << n;
    return 0;
}