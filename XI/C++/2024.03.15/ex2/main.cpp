#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, s, ok=0;
    char v[101][11], f[256], g[256];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cin.get();
    cin.get(f,256);
    char *p;
    g[0]=NULL;
    p = strtok(f, " ");
    while(p!=NULL){
        if(p[0]=='*'){
            s=strlen(p);
            for(int i=0;i<n;i++){
                if(strlen(v[i])==s){
                    strcpy(p,v[i]);
                    ok=1;
                }
            }
            if(ok==0){
                cout << "Imposibil"; return 0;
            }
        }
        strcat(g,p);
        strcat(g, " ");
        p=strtok(NULL, " ");
    }
    cout << g;
    return 0;
}
