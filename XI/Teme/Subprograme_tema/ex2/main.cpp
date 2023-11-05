#include <iostream>
using namespace std;

void suma_cif(int n, int&out){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    out = s;
}

void suma_cif_pare(int n, int&out){
    int s=0;
    while(n){
        if(n%2==0)
            s+=n%10;
        n/=10;
    }
    out = s;
}

void num_cif(int n, int&out){
    int ct=0;
    while(n){
        ct++;
        n/=10;
    }
    out = ct;
}

void num_cif_impare(int n, int&out){
    int ct=0;
    while(n){
        if(n%2)
            ct++;
        n/=10;
    }
    out = ct;
}

void prima_cif(int n, int&out){
    while(n>9){
        n/=10;
    }
    out = n;
}

void suma_div(int n, int&out){
    int s=0, d;
    for(d=1;d<=n;d++){
        if(n%d==0){
            s+=d;
        }
    }
    out = s;
}

void suma_div_proprii(int n, int&out){
    int s=0, d;
    for(d=2;d<n;d++){
        if(n%d==0){
            s+=d;
        }
    }
    out = s;
}

void suma_div_primi(int n, int&out){
    int s=0, d, i, ct;
    for(d=1;d<=n;d++){
        if(n%d==0){
            ct=0;
            for(i=1;i<=d;i++)
                if(d%i==0)
                    ct++;
            if(ct==2)
                s+=d;
        }
    }
    out = s;
}

void max_cif_impara(int n, int&out){
    int max=1;
    while(n){
        if(n%2!=0&&max<n%10)
            max=n%10;
        n/=10;
    }
    if(max)
        out = max;
    else
        out = -1;
}

void min_cif_para(int n, int&out){
    int min=n%10;
    while(n){
        while(min%2){
            min=n%10;
            n/=10;
        }
        if(n%2==0&&min>n%10)
            min=n%10;
        n/=10;
    }
    if(min)
        out = -1;
    else
        out = min;

    // Sau cu min=9 <<< mai simplu

    /*
    int min=9;
    while(n){
        if(n%2==0&&min>n%10)
            min=n%10;
        n/=10;
    }
    if(min==9)
        out = -1;
    else
        out = min;
    */
}

int main() {
    int out;
    suma_cif(324, out);
    cout << "a) " << out << endl;
    suma_cif_pare(324, out);
    cout << "b) " << out << endl;
    num_cif(324, out);
    cout << "c) " << out << endl;
    num_cif_impare(324, out);
    cout << "d) " << out << endl;
    prima_cif(324, out);
    cout << "e) " << out << endl;
    suma_cif(324, out);
    cout << "f) " << out << endl;
    suma_div_proprii(324, out);
    cout << "g) " << out << endl;
    suma_div_primi(324, out);
    cout << "h) " << out << endl;
    max_cif_impara(324, out);
    cout << "i) " << out << endl;
    min_cif_para(324, out);
    cout << "j) " << out << endl;
    out = 0;
}