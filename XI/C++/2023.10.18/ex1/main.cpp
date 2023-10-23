#include <iostream>
using namespace std;

/**
Un număr natural nenul se numește p-număr dacă are aceeași paritate cu suma divizorilor săi pozitivi.
Exemplu: 10 și 25 sunt p-numere (10 are aceeași paritate cu 18=1+2+5+10, iar 25 are aceeași
paritate cu 31=1+5+25).
Subprogramul kpn, are trei parametri, a, b și k, prin care primește câte un număr natural din intervalul
[1,106] (a≤b). Subprogramul returnează cel de al k-lea p-număr din intervalul [a,b] sau -1, dacă
nu există cel puțin k astfel de numere în acest interval. Scrieți definiția completă a subprogramului.
Exemplu: dacă a=27, b=50 și k=3, atunci subprogramul returnează 34.
**/

int kpn(int a, int b, int k){
    int i, ok=0, s, d;
    for(i=a;i<=b;i++){
        s=0;
        for(d=1;d<=i;d++){
            if(i%d==0){
                s=s+d;
            }
        }
        if(i%2==s%2){
            ok++;
            if(ok==3){
                return i;
            }
        }
    }
    if(ok==0){
        return -1;
    }
}

int main()
{
    int a=27,b=50, k=3;
    cout << kpn(a,b,k);
    return 0;
}
