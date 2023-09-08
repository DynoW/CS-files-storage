/*
0. Fişierul numere.txt conţine mai multe numere întregi (cel mult 100), fiecare număr
având cel mult 9 cifre. Se cere să se afişeze pe ecran, despărţite printr-un spaţiu, cele mai mari două valori pare memorate în fişier. Dacă în fişier nu se află memorate două astfel de valori, pe ecran se va afişa valoarea 0.

a) Descrieţi în limbaj natural o metodă de rezolvare eficientă din punct de vedere al
gestionării memoriei şi al timpului de executare. 
b) Scrieţi programul C/C++ corespunzător metodei descrise la punctul a. 

Exemplu: dacă fişierul numere.txt are conţinutul alăturat
5 10
3 -77 20
50 5 0 12 18 30
se vor afişa pe ecran, nu neapărat în această ordine:
30 50
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, max1=0, max2=0;
    ifstream f("numere.txt");
    while(f>>n){
        if(max1<n){
            max2=max1;
            max1=n;
        }else if(max2<n){
            max2=n;
        }
    }
    if(max2!=0){
        cout << max1 << " "<< max2 << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
