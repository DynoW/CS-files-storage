#include <iostream>

using namespace std;

/*Se fol un vector cu n elem. ordonati crescator vectorul in fct de cifra unit fiecarui elem*/

int main()
{
    int n, v[100], i, OK;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    do{
        OK=1;
        for(i=0;i<n-1;i++){
            if(v[i]%10>v[i+1]%10){
                OK=0;
                swap(v[i],v[i+1]);
            }
        }
    }while(OK==0);
    for(i=0;i<n;i++){
        cout << v[i] << " "
        ;
    }
    return 0;
}
