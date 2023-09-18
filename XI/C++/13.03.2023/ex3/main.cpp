#include <iostream>

using namespace std;
/**n elem afis elem vectorului care au nr cifrelor pare == 3**/

int main()
{
    int  n, v[100], i, cont, cp;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        cp=v[i];
        cont=0;
        while(cp!=0){
            if (cp%2==0){
                cont++;
            }
            cp=cp/10;
        }
        if(cont==3){
            cout << v[i] << " ";
        }
    }
    return 0;
}
