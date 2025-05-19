#include <iostream>
#include <fstream>
using namespace std;

/**fis date.in cont un v cu n elem
adaugati in fata fiecarui nr prim ultima cifra a acelui nr**/

int main()
{
    int n, i, j, v[100], ct;
    ifstream f("date.in");
    f >> n;
    for(i=0;i<n;i++){
        f >> v[i];
    }
    for(i=0;i<n;i++){
        ct=0;
        for(j=1;j<=v[i];j++){
            if(v[i]%j==0){
                ct++;
            }
        }
        if(ct==2){
            for(j=n;j>i;j--){
                v[j]=v[j-1];
            }
            n++;
            v[i]=v[i]%10;
            i++;
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
