#include <iostream>

using namespace std;

int n, a[100][100];

void citire(int i, int j) {
    if(i==0&&j==0){
        cin >> n;
    }
    if(i<n)
        if(j<n){
            cin >> a[i][j];
            citire(i,j+1);
        } else
            citire(i+1,0);
}

int prim(int x, int d) {
    if(d<=x)
        if(x%d==0)
            return 1 + prim(x,d+1);
        else
            return prim(x,d+1);
    else
        return 0;
}

int suma(int i, int j) {
    if(i<n) {
        if(j<n) {
            if(i%2==0&&prim(a[i][j],1)==2) {
                return a[i][j]+suma(i, j+1);
            } else
                return suma(i, j + 1);
        } else return suma(i+1, 0);
    } else return 0;
}

int main() {
    citire(0,0);
    cout << suma(0,0);
    return 0;
}