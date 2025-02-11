#include <iostream>
using namespace std;

int perfect(int x) {
    int d, s=0;
    for(d=1;d<=x;d++)
        if(x%d==0)
            s=s+d;
    if(2*x!=s)
        return 0;
    return 1;
}

int main() {
    int n[] = {2048,6,79,496,1379,28}, maxi=0, p=0, l=sizeof(n)/sizeof(n[0]);
    for(int i=0; i < l; i++) {
        if(perfect(n[i])==1) {
            if(n[i]>maxi) {
                maxi = n[i];
                p = ++i;
            }
        }
    }
    if(maxi)
        cout << maxi << " " << p;
    return 0;
}