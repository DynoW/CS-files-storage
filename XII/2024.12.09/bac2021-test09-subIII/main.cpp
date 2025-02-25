#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char f[256], *p, v[]="aeiou";
    int ct;
    cin.getline(f, 256);
    p=strtok(f, " ");
    while(p!=NULL) {
        ct=0;
        for(int j=0; j<5; j++)
            if(strchr(p,v[j]))
                ct++;
        if(ct==1)
            cout << p << endl;
        p = strtok(NULL, " ");
    }
    return 0;
}