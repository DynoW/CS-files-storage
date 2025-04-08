#include <iostream>
#include <cstring>

/**
Se citesc date referitoare la n elem: nume, m1, m2, m3
a) Calc med generala a elevului
b) Ord alfabetic in fct de nume elevi dati
**/
using namespace std;

struct elev {
    char nume[20];
    int m1;
    int m2;
    int m3;
    float mg;
} v[100];

int main()
{
    int i, n, j;
    cin >> n;
    for(i=0;i<n;i++){
        cin.get();
        cin.get(v[i].nume,20);
        cin >> v[i].m1;
        cin >> v[i].m2;
        cin >> v[i].m3;
    }
    for(i=0;i<n;i++){
        v[i].mg=(v[i].m1+v[i].m2+v[i].m3)/3.0;
    }
    cout << endl;
    for(i=0;i<n;i++){
        cout << v[i].mg;
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(v[i].nume,v[j].nume)>0)
                swap(v[i], v[j]);
    for(i=0;i<n;i++){
        cout << v[i].nume << ' ';
        cout << endl;
    }
    return 0;
}
