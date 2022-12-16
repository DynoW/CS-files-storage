#include <iostream>
#include <fstream>

using namespace std; /*
Pe prima linie a fişierului numere.txt sunt memorate cel mult 90 de numere întregi cu cel mult două cifre fiecare, separate prin câte un spaţiu.
Scrieţi programul C/C++ care să determine şi să afişeze pe ecran, media aritmetică a numerelor strict pozitive din fişier.
Dacă fişierul nu conţine numere strict pozitive se afişează pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul numere.txt conţine numerele 6 -26 0 9 -7 se va afişa
valoarea 7.5.*/

int main(){
    int n,nr=1,s=0;
    ifstream f("numere.txt");
    while(f>>n)
    {
     if(n>0)
       {if(n<=99) {s=s+n;
          nr++;}}
    }
    nr--;
    cout << s << " " << nr << endl;
    float ma = float(s)/nr;
    cout<<ma;
    return 0;
}