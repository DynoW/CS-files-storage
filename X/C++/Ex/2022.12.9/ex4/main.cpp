#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, min1=10000, min2=10000;
    ifstream f("date.in");
    ofstream g("date.out");
    while(f<<n){
        if(n%7==0){
            if(min1>=n){
                min2=min1;
                min1=n;
            }
            else if(min2>=n){
                min2=n;
            }
        }
        g<<min1<<" "<<min2;
    }
    return 0;
}
