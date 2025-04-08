#include <iostream>

using namespace std;

/**
Subprogramul duplicare are doi parametri:
• n, prin care primește un număr natural (n∈[1,104]);
• d, prin care furnizează numărul obținut prin duplicarea fiecărei cifre impare a lui n sau -1 dacă acesta
nu are nicio cifră impară.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2019, după apel d=201199.
**/

void duplicare(int n, int&d){
    int ogl=0,zer=0, ok=0, i;
    while(n!=0){
        if((n%10==0)&&(ok==0)){
            zer++;
        } else {
            ok=1;
        }
        ogl=ogl*10+n%10;
        if(n%2==1){
            ogl=ogl*10+n%10;
        }
        n=n/10;
    }
    while(ogl!=0){
        d=d*10+ogl%10;
        ogl=ogl/10;
    }
    for(i=1;i<=zer;i++){
        d=d*10;
    }
}

int main()
{
    int n=20190, d=0;
    duplicare(n, d);
    cout << d;
    return 0;
}
