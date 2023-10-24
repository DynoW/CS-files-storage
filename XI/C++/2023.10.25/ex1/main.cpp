#include <iostream>
#include <fstream>

using namespace std;

void sterge(int v[100], int&n, int&i){
    int j;
    for(j=i;j<n-1;j++)
        v[j]=v[j+1];
    n--;
}

int main() {
    int n, v[100], i, j;
    ifstream f("NUMERE.IN");
    f >> n;
    for(i=0;i<n;i++)
        f >> v[i];
    for(i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            sterge(v, n, i);
            i--;
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << ' ';
    }
    return 0;
}