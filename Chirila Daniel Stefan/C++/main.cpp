#include <iostream>
#include <fstream>
using namespace std;

int nr_prim(int n){
    int ct=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            ct++;
    if(ct==2)
        return 1;
    else
        return 0;
}

int cmmdc(int a, int b) {
    if(a * b == 0)
        return a + b;
    else {
        while(a != b)
            if(a > b)
                a = a - b;
            else
                b = b - a;
        return a;
    }
}

int main() {
    ifstream f("numere.in");
    int x, y, ct=0;
    f >> x;
    while (f >> y) {
        if(nr_prim(x)==0&&nr_prim(y)==0&&cmmdc(x,y)==1)
            ct++;
        x=y;
    }
    cout << ct;
    return 0;
}