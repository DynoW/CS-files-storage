#include <iostream>
using namespace std;

void citire(int& n, int v[100][100]) {
    int i, j;
    cin >> n;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> v[i][j];
}

int linii(int n, int v[100][100]) {
    int ct = 0; //contor linii cu elemente egale

    // verifica sub diagonala principala inclusiv diagonala
    for(int i = 0; i < n; i++) {
        int ok = 1; // presupunem ca toate elementele de pe linie sunt egale
        int cp = v[i][0];  // primul element al fiecarei diagonale
        for(int j = 0; j < n; j++) {
            if(i + j < n && v[i + j][j] != cp) { // verifica daca restul elementelor sunt egale cu primul (mai multe expliactii mai jos)
                ok = 0; // daca nu este egal, ok=0 si se intrerupe for
                break;  // Obs: ignora deoacamdata i+j<n (doar verifica sa nu treaca mai mult de marginile matricei)
            }
        }
        if(ok) { // verifica daca au fost elementele egale pe linie
            ct++;
        }
    }

    // verifica peste diagonala principala
    for(int j = 1; j < n; j++) { //restul este la fel doar ca inversezi liinile cu coloanele vezi mai jos explicatie cu desen
        int ok = 1;
        int cp = v[0][j]; // (2)
        for(int i = 0; i < n; i++) {
            if(i + j < n && v[i][i + j] != cp) { // (2)
                ok = 0;
                break;
            }
        }
        if(ok) {
            ct++;
        }
    }

    /*
    Ignora (1) si (2) pana la bonus
    Obs: pe telefon posibil sa nu fie afisati corect indicii
    a₀₀   a₀₁   a₀₂   a₀₃
        \
    a₁₀   a₁₁   a₁₂   a₁₃
              \
    a₂₀   a₂₁   a₂₂   a₂₃
                    \
    a₃₀   a₃₁   a₃₂   a₃₃

    Deasupa diagonalei principale sun fix cele de jos doar ca se schimba i cu j (1)

    Vezi pozitie a₁₀ si a₀₁, a₂₁ si a₁₂, a₃₀ si a₀₃.
    Sunt simetrice de diagonala

    Reintoarce-te la cod^^^ si mai analizeaza-l o data

    Dupa ce termini incearca sa faci manual (pe foaie) cu
    input:
    4
    1 2 3 4
    5 1 2 3
    6 5 1 2
    7 6 5 1
    
    expected output:
    7

    Tip: pentru a ignora colturile mergi pana in n-1

    Bonus: pentru a verifica afirmatia notata cu (1):
    1) comenteaza primul for mare cu ( folosesti /* )
    2) dubleaza al doilea for mare
    3) fa schimbari doar in forul copiat:
        a) inverseaza valorile din [] ale vectorului unde vezi comentul: // (2)
        b) j incepe de la 0 in loc de 1
    Ar trebui sa mearga ca cel initial daca ai facut bine
    */

    return ct;
}

int main() {
    int n, v[100][100];
    citire(n, v);
    cout << linii(n, v);
    return 0;
}