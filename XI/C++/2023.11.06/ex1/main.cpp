#include <iostream>

using namespace std;

/**
n*n
a) sa se calc nr val care au un nr de cif pare == cu nr cif impare sit pe diag secundara
b) sa se afis suma elem sit pe linii pare care sunt div cu 7
**/

void citire(int&n, int v[100][100]){
    int i, j;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
}

int cif_pare_impare (int a){
    int ctp=0, cti=0;
    while(a){
        if(a%2){
            cti++;
        }else{
            ctp++;
        }
        a/=10;
    }
    if(cti==ctp){
       return 1;
    } else {
        return 0;
    }

}

int diag_sec(int n, int v[100][100]){
    int i, j, ct=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j==n-1){
                if(cif_pare_impare(v[i][j])==1)
                    ct++;
            }
        }
    }
    return ct;
}

int suma_div_7(int n, int v[100][100]){
    int i, j, s=0;
    for(i=0;i<n;i+=2){
        for(j=0;j<n;j++){
            if(v[i][j]%7==0)
                s=s+v[i][j];
        }
    }
    return s;
}

int main()
{
    int n, v[100][100];
    citire(n, v);
    cout << diag_sec(n, v) << endl;
    cout << suma_div_7(n, v) << endl;

    return 0;
}
