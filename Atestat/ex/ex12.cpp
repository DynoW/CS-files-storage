#include <iostream>
#include <fstream>

using namespace std;

ifstream f("perfect.in");

int perfect(int x) {
    int d, s=0;
    for(d=1;d<=x;d++)
        if(x%d==0)
            s=s+d;
    if(2*x!=s)
        return 0;
    return 1;
}

int main() {
    int n, p = 0, i=1, maxi = 0;
    while (f>>n) {
        if(perfect(n))
            if(n > maxi) {
                maxi = n;
                p = i;
            }
        i++;
    }
    cout << maxi << " " << p;
    return 0;
}
