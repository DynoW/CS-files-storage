#include <iostream>

using namespace std;

void citire (int v[100][100], int&n){
    int i, j;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
}

int palindrom(int n){
    int ogl=0, cp=n;
    while (n!=0){
        ogl=ogl*10+n%10;
        n=n/10;
    }
    if(cp==ogl)
        return 1;
    else
        return 0;
}

void suma(int v[100][100], int n){
    int s=0, i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(palindrom(v[i][j])==1)
                s=s+v[i][j];
        }
    }
    cout << s << " ";
}

int prim(int n){
    int ct=0, d;
    for (d=1;d<=n;d++){
        if(n%d==0){
            ct++;
        }
    }
    if (ct==2)
        return 1;
    else
        return 0;
}

void linii(int v[100][100], int n){
    int i, j;
    for(i=0;i<n;i+=2){
        for(j=0;j<n;j++){
            if(prim(v[i][j])==1){
                cout << v[i][j] << " ";
            }
        }
    }
}

int main()
{
    int n, v[100][100];
    citire(v, n);
    suma(v, n);
    cout << endl;
    linii(v, n);
    return 0;
}
