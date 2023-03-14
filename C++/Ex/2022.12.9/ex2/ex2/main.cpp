#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, suma, ct, cop;
    ifstream f("date.in");
    ofstream g("date.out");
    while(f>>n){
        suma=0;
        ct=0;
        cop=n;
        while(cop!=0){
            suma=suma+cop%10;
            cop=cop/10;
        }
        for(i=1;i<=suma;i++){
            if (suma%i==0){
                ct=ct+1;
            }
        }
        if (ct==2){
            g << n << " ";
        }
    }
    return 0;
}
