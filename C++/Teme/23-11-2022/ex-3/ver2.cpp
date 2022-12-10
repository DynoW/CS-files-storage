/*
3.
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤50) şi care afişează pe prima linie a fişierului BAC.TXT primele n numere pare, pe a doua linie primele n-1 numere pare, ..., pe linia n primul număr par. Numerele vor fi afişate pe fiecare linie în ordine crescătoare şi vor fi separate prin câte un spaţiu
Exemplu: dacă n=3 fişierul BAC.TXT va avea conţinutul alăturat. 
0 2 4 
0 2 
0
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    ofstream g("BAC.TXT");
    while(n--){
        for(i=0;i<=n;i++){
            cout << i*2 << " ";
        }
        cout << endl;
    }
    return 0;
}