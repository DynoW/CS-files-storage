#include <iostream>
using namespace std;

int main() {
    int n, x, save, i, sav=-1;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        if(x < 0){
            save = i;
            if(sav==-1)
                sav = i;
        }
    }
    if(save>n-sav)
        cout << save;
    else
        cout << n-sav;
    return 0;
}