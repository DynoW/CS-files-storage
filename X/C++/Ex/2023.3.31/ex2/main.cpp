#include <iostream>
/*
Adauga dupa nr care au 4 div, dublul lor
*/
using namespace std;

int main()
{
    int n, v[100], i, ct, j, i2;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        ct=0;
        for(i2=0;i2<v[i];i2++){
            if(v[i]%v[i2]==0){
                ct++;
            }
        }
        if(ct==4){
            for(j=n;j>i+1;j--){
                v[j]=v[j-1];

            }
            v[i+1]=v[i]*2;

            n++;
            i++;
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
}
