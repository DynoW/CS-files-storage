#include <iostream>
#include <fstream>
using namespace std;

int prim(int n){
    int i, ct=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
            ct++;
    if(ct==2)
        return 1;
    else
        return 0;
}

int main(){
    int n, ok=1;
    ifstream f("nr.in");
    while(f>>n){
        if(prim(n)==0){
            ok=0;
            break;
        }
    }
    if(ok==1)
        cout << "da";
    else
        cout << "nu";
    return 0;
}