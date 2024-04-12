
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char f[256], g[256], *p;
    int i;
    cin.get(f,256);
    g[0] = NULL;
    p = strtok(f, " ");
    while(p!=NULL){
        if(strchr(p, ',')!=NULL){
            i=strchr(p, ',')-p;
            p[i]=NULL;
        }
        strcat(g,p);
        strcat(g," ");
        p = strtok(NULL, " ");
    }
    strcpy(f, g);
    cout << f;
    return 0;
}
