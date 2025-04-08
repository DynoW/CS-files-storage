#include <iostream>
#include <cmath>

using namespace std;

int transformareBaza10(int b, int n){
    int i=0, s=0;
    while(n!=0){
        s=s+n%10*pow(b,i);
        i++;
        n=n/10;
    }
    return s;
}

int main()
{
    cout << transformareBaza10(2, 10010);
    return 0;
}
