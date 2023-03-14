#include <iostream>
using namespace std;

int main(){
    int n, x, i, v, cop, ct=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> x;
        v = 0;
        cop = x;
        while(cop!=0){
            if(cop%2==1){
                v = 1;
            }
            cop = cop/10;
        }
        if(v==0){
            cout << x << " ";
            ct = 1;
        }
    }
    if (ct==0){
        cout << "Nu sunt numere cu cifre pare." << endl;
    }
    return  0;
}