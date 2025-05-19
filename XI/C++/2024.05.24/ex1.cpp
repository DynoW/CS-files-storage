#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int x, y=0, ct1=0, ct2=0, max=0;
    ifstream f("bac.txt");
    f>>x;
    y=x%2;
    while (f>>x){
        if(x%2==y){
            ct2++;
            if(ct2 > max) {
                max=ct2;
                ct2=1;
            } else if(ct2 == max) {
                ct1++;
            }
        } else {
            ct2=1;
        }
        y=x%2;
    }
    cout << endl;
    cout << ct1 << " " << max;
    return 0;
}
