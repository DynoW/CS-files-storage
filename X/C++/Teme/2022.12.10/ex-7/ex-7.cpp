#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, i, min=9, max=0, x;
    ifstream f("numere.txt");
    f >> n;
    for(i=1;i<=n;i++){
        f >> x;
        if(min>x){
            min=x;
        }
        if(max<x){
            max=x;
        }
    }
    cout << max << " " << min;
    return 0;
}
