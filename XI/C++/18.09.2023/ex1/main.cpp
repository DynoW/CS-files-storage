#include <iostream>
#include <fstream>
using namespace std;

/**
FIS date.in cont un v cu n elem
a) afis nr perf din v
b) ordonati cresc elem v in fct de nr cifrelor
c) suma nr prime sit pe poz pare in v
**/

int main()
{
    int n, v[100], i, j, p, d, s, cp1, cp2, n1, n2, sp=0;
    ifstream f("date.in");
    f >> n;
    for(i=0;i<n;i++){
        f >> v[i];
    }

    for(i=0;i<n;i++){
        s=0;
        for(j=1;j<v[i];j++){
            if(v[i]%j==0){
                s=s+j;
            }
        }
        if(s==v[i]){
            cout << v[i] << " ";
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            cp1=v[i];
            cp2=v[j];
            n1=0;
            n2=0;
            while(cp1!=0){
                n1++;
                cp1=cp1/10;
            }
            while(cp2!=0){
                n2++;
                cp2=cp2/10;
            }
            if(n1>n2){
                swap(v[i], v[j]);
            }
        }
    }
    cout << endl;
    n1=0;
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    for(i=0;i<n;i=i+2){
        for(j=1;j<=n;j++){
            if(i%j==0){
                n1++;
            }
        }
        if(n1==2){
            s=s+v[i];
        }
    }
    cout << endl << s;

    return 0;
}
