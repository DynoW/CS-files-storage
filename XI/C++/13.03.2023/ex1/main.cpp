#include <iostream>
#include <fstream>
using namespace std;

/**
fis date.in cont pe prima linie un nr n, iar pe a doua n nr
a) afis pe ecran separate prin cate un spati nr prime sit pe a doua linie
b) afis pe urm linie a ecranului elem in ordine descresc
**/

int main()
{
    int  n, v[100], i, i2, cont, j;
    ifstream f("date.in");
    f>>n;
    for(i=0;i<n;i++){
        f>>v[i];
    }
    for(i=0;i<n;i++){
        cont=0;
        for(i2=1;i2<=v[i];i2++){
            if(v[i]%i2==0){
                cont = cont+1;
            }
        }
        if(cont==2){
            cout << v[i] << " ";
        }
    }
     cout << endl;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(v[i]<v[j]){
                swap(v[i], v[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
