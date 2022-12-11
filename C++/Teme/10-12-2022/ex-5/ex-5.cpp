#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, i, s=0;
    cin >> n;
    ofstream g("REZULTAT.TXT");
    for(int i=1; i<=n; i++){
        s=s+(3*i-2);
    }
    g << s;
    return 0;
}
