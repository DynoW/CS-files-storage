#include <iostream>
#include <fstream>

using namespace std;

int nrpare_p(int n, int v[101][101]) {
    int i, j, ct = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == j && v[i][j] % 2 == 0)
                ct++;
    return ct;
    if (ct == 0)
        return -1;
}

int nrpare_s(int n, int v[101][101]) {
    int i, j, ct = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i + j == n-1 && v[i][j] % 2 == 0)
                ct++;
    return ct;
    if (ct == 0)
        return -1;
}

int main() {
    int n, v[101][101], i, j, sp=0, ss=0;
    ifstream f("matrice.in");
    f>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            f>>v[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sp=n-nrpare_p(n, v);
            ss=n-nrpare_s(n, v);
    if(sp+ss<=0){
        cout << "nu exista";
    } else {
        cout << ss+sp;
    }
    return 0;
}