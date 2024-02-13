#include <iostream>

using namespace std;

int cif_pare(int x) {
    if(x!=0){
        if(x%10%2==0)
            return 1 + cif_pare(x / 10);
        else
            return cif_pare(x / 10);
    } else
        return 0;
}

int main() {
    cout << cif_pare(68923);
    return 0;
}