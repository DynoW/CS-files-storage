/*
5. Fişierul text BAC.TXT conţine mai multe numere naturale cu cel mult 6 cifre fiecare, câte un număr pe fiecare linie a fişierului. Scrieţi un program C/C++ care afişează pe ecran toate numerele din fişier, în aceeaşi ordine, câte cinci numere pe fiecare linie, separate prin câte un spaţiu, cu excepţia ultimei linii care poate conţine mai puţin de cinci numere.

Exemplu: dacă fişierul are conţinutul alăturat, pe ecran se afişează:
11 21 30 40 51
16 17 10 1
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, i, ct=0;
    ifstream f("BAC.TXT");
    while(f >> n){
        ct = ct+1;
        cout << n << " ";
        if(ct == 5){
            cout << endl;
            ct=0;
        }
    }
    return 0;
}