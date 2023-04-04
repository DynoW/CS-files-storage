#include <iostream>

using namespace std;

/*se citeste un vector cu n elem, afis descresc elem vectorului in fct de nr cifrelor pare
124 70 5842 13 6240*/

int main()
{
    int n, v[100], i, j, v2[100], ok, cp;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        j=0;
        cp=v[i];
        while(cp!=0){
            if(cp%2==0){
                j = j+1;
            }
            cp = cp/10;
        }
        v2[i] = j;

    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(v2[i]<v2[j]){
                swap(v[i],v[j]);
                swap(v2[i],v2[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
