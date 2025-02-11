#include <iostream>
#include <fstream>
using namespace std;

ofstream f("palindrom.out");

int oglinda(int x) {
    int ogl = 0;
    while(x!=0) {
        ogl=ogl*10+x%10;
        x/=10;
    }
    return ogl;
}

int main() {
    int a, b, i, k, ok=0;
    cin >> a >> b;
    for(i=a;i<=b;i++) {
        if(oglinda(i)==i)
            f << i << " ";
    }

    f << endl;
    cin >> k;
    if(oglinda(k) == k) {
        f << "palindrom";
    } else {
        while(k < 9999999 && ok == 0) {
            k++;
            if(k == oglinda(k)) {
                ok = 1;
            }
        }
        if(ok != 0) {
            f << k;
        }
    }
    return 0;
}