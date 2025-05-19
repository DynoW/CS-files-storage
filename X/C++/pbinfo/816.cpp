#include <iostream>

using namespace std;

int main(){
    int x, y, i, l=0, n=0;
    cin >> x >> y;
    while(l<y){
        l=l+x;
        n=n+1;
    }
    cout << n;
    return 0;
}