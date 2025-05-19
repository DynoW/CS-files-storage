#include <iostream>
using namespace std;

int cif_impare(int n){
    while(n){
        if(n%2==0)
            return 0;
        n/=10;
    }
    return 1;
}

int o_cif_para(int n){
    while(n){
        if(n%2==0)
            return 1;
        n/=10;
    }
    return 0;
}

int min_2_cif_de_4(int n){
    int ct=0;
    while(n){
        if(n%10==4)
            ct++;
        if(ct==2)
            return 1;
        n/=10;
    }
    return 0;
}

int max_3_cif_de_7(int n){
    int ct=0;
    while(n){
        if(n%10==7)
            ct++;
        if(ct>3)
            return 0;
        n/=10;
    }
    return 1;
}

int o_cif_de_9(int n){
    while(n){
        if(n%10==9)
            return 1;
        n/=10;
    }
    return 0;
}

int prim(int n){
    int i, ct=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
            ct++;
    if(ct==2)
        return 1;
    else
        return 0;
}

int perfect(int n){
    int i, s=0;
    for(i=1;i<n;i++)
        if(n%i==0)
            s+=i;
    if(s==n)
        return 1;
    else
        return 0;
}

int rotund(int n){
    int ct0=0, ct1=0;
    while(n){
        if(n%2)
            ct1++;
        else
            ct0++;
        n/=2;
    }
    if(ct0==ct1)
        return 1;
    else
        return 0;
}

int cif_distincte(int n){
    int v[10]={0}, i;
    while(n){
        v[n%10]++;
        n/=10;
    }
    for(i=0;i<10;i++){
        if(v[i]>1)
            return 0;
    }
    return 1;
}

int palindrom(int n){
    int ogl=0, cp=n;
    while(cp){
        ogl=ogl*10+cp%10;
        cp/=10;
    }
    if(ogl==n)
        return 1;
    else
        return 0;
}

int main(){
    cout << "a) " << cif_impare(795) << endl;
    cout << "b) " << o_cif_para(225) << endl;
    cout << "c) " << min_2_cif_de_4(24145) << endl;
    cout << "d) " << max_3_cif_de_7(7167) << endl;
    cout << "e) " << o_cif_de_9(1295) << endl;
    cout << "f) " << prim(13) << endl;
    cout << "g) " << perfect(28) << endl;
    cout << "h) " << rotund(225) << endl;
    cout << "i) " << cif_distincte(864) << endl;
    cout << "j) " << palindrom(51415) << endl;
    return 0;
}
