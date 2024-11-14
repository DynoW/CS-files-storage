#include <iostream>
using namespace std;

void divPrim(int n,int s) {
    int d,p;
    s=0;
    for(d=2;d<=n;d++){
        p=0;
        if(n%d==0){
            while(n%d==0){
                n=n/d;
                p++;
            }
        }
        if(p%2!=0)
            s=s+d;
    }
    cout<<s;
}

int main() {
    divPrim(360,0);
    return 0;
}