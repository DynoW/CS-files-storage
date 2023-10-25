#include <iostream>
#include <fstream>
using namespace std;

void sterge(int v[100], int&n, int i){
    int k;
    for(k=i;k<n;k++){
        v[k]=v[k+1];
    }
    n--;
}

int main()
{
    ifstream f("NUMERE.IN");
    int n, m, v[100], j, i, a[100];
    f >> n;
    for(j=0;j<n;j++){
        f >> v[j];
    }

    for(j=0;j<n;j++){
        if(v[j]==v[j+1]){
            sterge(v, n, j);
            j--;
        }
    }

    for(j=0;j<n;j++){
        cout << v[j] << " ";
    }
    return 0;
}
