#include <iostream>
using namespace std;

void suma(int n, int &s) {
    int v[10] = { 0 };
    while (n!=0) {
        if(n%2==0){
            v[n%10]++;
            if(v[n%10]==1)
                s=s+n%10;
        }
        n=n/10;
    }
}

int main() {
    int n, s=0;
    cin >> n;
    suma(n, s);
    cout << s;
    return 0;
}