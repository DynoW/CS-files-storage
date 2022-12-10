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
    int n, i, i1, ct;
    cin >> n;
    ofstream g("BAC.TXT");
    for(i=n;i>=1;i--){
        for(i1=1;i1<n;i++){
            cout << i1 << "";
            if(i1%2==0){
                cout << i1;
            }
        }
        cout << endl;
    }
    return 0;
}