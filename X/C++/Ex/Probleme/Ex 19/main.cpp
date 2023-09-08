/**
Fisierul date.in contine pe prima linie n, iar pe linia, n nr separate prin spatiu. Date.out nr pt care nr form din ultimele 2 cifre este nr prim.
**/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,i,x,sav,i2,ct;
    ifstream f("date.int");
    ofstream g("date.out");
    f >> n;
    for(i=1;i<=n;i++){
        f >> x;
        ct=0;
        sav=x%100;
        for(i2=1;i2<=sav;i2++){
            if(sav%i2==0){
                ct=ct+1;
            }
        }
        if(ct==2){
            g << x << " ";
        }

    }
    return 0;
}
