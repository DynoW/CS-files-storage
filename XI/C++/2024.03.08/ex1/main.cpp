#include <iostream>
using namespace std;

/**
sa se afis toate nr form din n cif cu prop ca nu exista 2 cif impare sit una langa celalta
**/
int v[100], n;

void afis(int k) {
        for(int i=0;i<=k;i++){
            cout << v[i] << " ";
        }
        cout << endl;
}

void yes(int i){
        for(int j=0;j<=9;j++) {
            int verif = 1;
            v[i]=j;
            if(i>0&&v[i-1]%2==1&&v[i]==1)
                verif = 0;
            if(v[0]==0)
                verif = 0;
            if(verif==1){
                if(i==n-1)
                    afis(i);
                else
                    yes(i+1);
            }
        }
}

int main()
{
    cin >> n;
    yes(0);
    return 0;
}
