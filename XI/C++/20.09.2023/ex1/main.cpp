#include <iostream>
#include <fstream>
using namespace std;

/**
Fis date.in cont un v cu n elem, eliminati din v nr care au 3 divizori
**/

int main()
{
    int n, v[100], i, j, k ,ct;
    ifstream f("date.in");
    f >> n;
   //cout << n;
    for(i=0;i<n;i++){
        f >> v[i];
    }
    for(i=0;i<n;i++){
        ct = 0;
        for(j=1;j<=v[i];j++){
            if(v[i]%j==0){
                ct++;
            }
        }
        if(ct==3){
            for(k=i;k<n;k++){
                v[k]=v[k+1];
            }
            n--;
            i--;
        }
    }
    for (i=0;i<n;i++){
        cout << v[i] << " " ;
    }
    return 0;
}
