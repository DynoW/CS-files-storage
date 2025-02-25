#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("anagrame1.in");
ofstream g("anagrame1.out");

/**
sa se afis toate nr form din n cif cu prop ca nu exista 2 cif impare sit una langa celalta
**/
char S[100];
int v[100], n;

void afis(int k) {
        for(int i=0;i<=k;i++){
            g << S[v[i]];
        }
        g << endl;
}

void yes(int k){
    int i, j, ok;
    for(i=0;i<n;i++) {
        v[k] = i;
        ok = 1;
        for(j=0;j<k;j++){
            if(v[k]==v[j])
                ok = 0;
        }
        if(ok==1){
            if(k==n-1)
                afis(k);
            else
                yes(k+1);
        }
    }
}

int main()
{
    f >> S;
    n = strlen(S);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(S[i]>S[j])
                swap(S[i],S[j]);
    yes(0);
    return 0;
}
