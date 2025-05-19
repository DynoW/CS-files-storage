#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, np, ni, cop;
    ifstream f("date.in");
    while(f >> n){
        np = 0;
        ni = 0;
        cop = n;
        while(cop!=0){
            if(cop%10%2==0){
                np = np + 1;
            } else {
                ni = ni + 1;
            }
            cop = cop/10;
        }
        if(np==ni){
            cout << n << endl;
        }
    }

    return 0;
}
