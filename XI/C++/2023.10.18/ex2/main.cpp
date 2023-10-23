#include <iostream>
#include <cmath>
using namespace std;

/**
Subprogramul multiplu are un singur parametru, n, prin care primește un număr natural
(n∈[1,104]). Subprogramul returnează cel mai mic multiplu nenul al lui n cu proprietatea că este
pătrat perfect. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=72 sau n=144, subprogramul returnează numărul 144 (144=122
).
**/

/*int multiplu(int n){
    int cmmmc=n, d=2, p;
    while(n!=1){
        p=0;
        while(n%d==0){
            n=n/d;
            p++;
        }
        if(p==2){
            return cmmmc;
        }
        d++;
    }
}*/

int multiplu(int n){
    int x=1;
    while(sqrt(n*x)!=(int)sqrt(n*x)){
        x++;
    }
    return n*x;
}

int main()
{
    int n=144;
    cout << multiplu(n);
    return 0;
}
