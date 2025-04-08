#include <iostream>

using namespace std;

/**
Subprogramul suma are doi parametri, a și b, prin care primește câte un număr natural din intervalul
[1,104]. Subprogramul returnează suma divizorilor naturali comuni lui a și b.
Scrieți definiția completă a subprogramului.
Exemplu: dacă a=20 și b=12, atunci subprogramul returnează valoarea 7 (1+2+4=7).
**/

int suma(int a, int b){
    int d, s=0;
    for(d=1;d<=a;d++){
        if(a%d==0&&b%d==0){
            s=s+d;
        }
    }
    return s;
}

int main()
{
    int a=20, b=12;
    cout << suma(a, b);
    return 0;
}
