#include <iostream>
/*
Se citeste un vector cu n elem
a)Eliminati din vector nr care cont. 2 cifre pare
b)Ordonati crescator v in fct de cifra zecilor
*/
using namespace std;

int main()
{
    int n, v[100], i, cop, ct, j;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        ct=0;
        cop=v[i];
        while(cop!=0){
            if(cop%2==0){
                ct++;
            }
            cop = cop / 10;
        }
        if(ct==2){
            for(j=i;j<n-1;j++){
                v[j]=v[j+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(v[i]/10%10>v[j]/10%10){
                swap(v[i],v[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
