#include <iostream>
/* Ordonati descrscator elem unui vector sit intre poz elem min si poz elem max
    6 7 2 10 9 14 3
*/

using namespace std;

int main()
{
    int n, i, j, mina, minb, maxa, maxb, v[100];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    mina = v[0];
    minb = 0;
    maxa = v[0];
    maxb = 0;

    for(i=0;i<n;i++){
        if(v[i]>maxa){
            maxa = v[i];
            maxb = i;
        }
        if(v[i]<mina){
            mina = v[i];
            minb = i;
        }
    }
    if(maxb<minb){
        swap(maxb,minb);
    }
    for(i=minb;i<maxb;i++){
        for(j=i+1;j<=maxb;j++){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
