#include <iostream>

using namespace std;

int main(){
    int n,d,p,s=0;
    cin >> n;
    d=2;
    while(n!=1){
        p=0;
        while(n%d==0){
            p=p+1;
            n=n/d;
        }
        if(p!=0){
                s=s+d;
        }
    }
    cout << s;
    return 0;
}
