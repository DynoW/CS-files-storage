#include <iostream>
using namespace std;

int suma_cif(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int suma_cif_pare(int n){
    int s=0;
    while(n){
        if(n%2==0)
            s+=n%10;
        n/=10;
    }
    return s;
}

int num_cif(int n){
    int ct=0;
    while(n){
        ct++;
        n/=10;
    }
    return ct;
}

int num_cif_impare(int n){
    int ct=0;
    while(n){
        if(n%2)
            ct++;
        n/=10;
    }
    return ct;
}

int prima_cif(int n){
    while(n>9){
        n/=10;
    }
    return n;
}

int suma_div(int n){
    int s=0, d;
    for(d=1;d<=n;d++){
        if(n%d==0){
            s+=d;
        }
    }
    return s;
}

int suma_div_proprii(int n){
    int s=0, d;
    for(d=2;d<n;d++){
        if(n%d==0){
            s+=d;
        }
    }
    return s;
}

int suma_div_primi(int n){
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
    return s;
}

int max_cif_impara(int n){
    int max=0;
    while(n){
        if(n%2!=0&&max<n%10)
            max=n%10;
        n/=10;
    }
    if(max)
        return max;
    else
        return -1;
}

int min_cif_para(int n){
    int min=n%10;
    while(n){
        while(min%2&&n>9){
            min=n%10;
            n/=10;
        }
        if(n%2==0&&min>n%10)
            min=n%10;
        n/=10;
    }
    if(min%2)
        return -1;
    else
        return min;
}

int main() {
    cout << suma_cif(324) << endl;
    cout << suma_cif_pare(324) << endl;
    cout << num_cif(324) << endl;
    cout << num_cif_impare(324) << endl;
    cout << prima_cif(324) << endl;
    cout << suma_cif(324) << endl;
    cout << suma_div_proprii(324) << endl;
    cout << suma_div_primi(324) << endl;
    cout << max_cif_impara(724) << endl;
    cout << min_cif_para(724) << endl;
    return 0;
}