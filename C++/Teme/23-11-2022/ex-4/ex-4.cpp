/*
4. Fişierul BAC.TXT conţine pe prima linie un număr natural n (0<n≤1000) şi pe a doua linie, separate prin câte un spaţiu, n numere naturale nenule (cu cel mult 9 cifre fiecare). Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran câte numere prime conţine şirul citit de pe a doua linie a fişierului.

Exemplu: dacă fişierul are conţinutul
5
12 3 9 7 1
se va afişa: 2 pentru ca avem  3 7 nr prime
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, x, i, i2, ct, ct2 = 0;
    ifstream f("BAC.TXT");
    f >> n;
    for(i=1; i<=n; i++){
        f >> x;
        ct = 0;
        for(i2=1; i2<=n; i2++){
            if(x%i2==0){
                ct=ct+1;
            }
        }
        if(ct==2){
            ct2=ct2+1;
        }
    }
    cout << ct2;
    return 0;
}