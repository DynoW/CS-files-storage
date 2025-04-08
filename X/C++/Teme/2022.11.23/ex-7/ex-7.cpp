/*
Pe prima linie a fişierului numere.txt sunt memorate cel mult 90 de numere întregi cu cel mult două cifre fiecare, separate prin câte un spaţiu.
Scrieţi programul C/C++ care să determine şi să afişeze pe ecran, media aritmetică a numerelor strict pozitive din fişier.
Dacă fişierul nu conţine numere strict pozitive se afişează pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul numere.txt conţine numerele 6 -26 0 9 -7 se va afişa
valoarea 7.5.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n,nr=1,s=0;
    float ma;
    ifstream f("numere.txt");
    while(f>>n)
    {
     if(n>0)
       {if(n<=99) {s=s+n;
          nr++;}}
    }
    nr--;
    ma=s*1.0/nr;
    if (s!=0) cout<<ma;
    else cout<<"NU EXISTA";
    return 0;
}
