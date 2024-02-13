#include <iostream>

using namespace std;

int n;

void triunghi(int i, int j){
    if(i<=n){
        if(j<=i){
            cout << i << " ";
            triunghi(i,j+1);
        } else {
            cout << endl;
            triunghi(i+1,1);
        }
    }
}

int main() {
    cin >> n;
    triunghi(1,1);
    return 0;
}