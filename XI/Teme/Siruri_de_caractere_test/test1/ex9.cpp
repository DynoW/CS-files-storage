#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char f[101], g[101], *p;
    cin.get(f,101);
    g[0]=NULL;
    p=strtok(f," ");
    while (p!=NULL) {
        if(strlen(p)==3)
            strcat(g,"* ");
        else {
            strcat(g,p);
            strcat(g, " ");
        }
        p = strtok(NULL, " ");
    }
    strcpy(f,g);
    cout<<f;
    return 0;
}