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
    long long n, i, i1, i2, ct;
    cin >> n;
    ofstream g("BAC.TXT");
    for(i=n;i>=1;i--){
        for(i1=1;i1<=n;i++){
            cout << "Ntza";
            ct=0;
            for(i2=1;i2<=i1;i++){
                if(i1%i2==0){
                    ct=ct+1;
                    cout << i2 << " ";  
                }
            }
            if(ct==2){
                cout << i1 << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}