#include <iostream>
using namespace std;

/**
Se citeste un vector cu n elem
Ordoanti cresc v dupa ce au fost adaugate dupa fiecare nr par suma sifrelor nr respectiv
**/

int main()
{
    int n, i, j, v[100], ct, cp, s;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        cp=v[i];
        s=0;
        if(v[i]%2==0){
            for(j=n;j>i+1;j--){
                v[j]=v[j-1];
            }
            n++;
            while(cp){
                s=s+cp%10;
                cp=cp/10;
            }
            v[i]=s;
            i++;
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[j]<v[i]){
                swap(v[i],v[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
