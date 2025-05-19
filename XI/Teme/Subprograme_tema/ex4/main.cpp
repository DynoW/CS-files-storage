#include <iostream>
using namespace std;

int cif_distincte(int a, int b){
    int v1[10]={0}, v2[10]={0}, i;
    while(a){
        v1[a%10]++;
        a/=10;
    }
    while(b){
        v2[b%10]++;
        b/=10;
    }
    for(i=0;i<10;i++)
        if(v1[i]>0&&v2[i]>0)
            return 0;
    return 1;
}

int min_2_cif_comune(int a, int b){
    int v1[10]={0}, v2[10]={0}, i, ct=0;
    while(a){
        v1[a%10]++;
        a/=10;
    }
    while(b){
        v2[b%10]++;
        b/=10;
    }
    for(i=0;i<10;i++){
        if(v1[i]>0&&v2[i]>0)
            ct++;
        if(ct>=2)
            return 1;
    }
    return 0;
}

int prietene(int a, int b){
    int i, sa=0, sb=0;
    for(i=1;i<a;i++)
        if(a%i==0)
            sa+=i;
    for(i=1;i<b;i++)
        if(b%i==0)
            sb+=i;
    if(sa==b&&sb==a)
        return 1;
    else
        return 0;
}

int prime(int a, int b){
    if(a*b==0)
        if(a+b==1)
            return 1;
        else
            return 0;
    else {
        while(a!=b){
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        if(a==1)
            return 1;
        else
            return 0;
    }
}

int main(){
    cout << "a) " << cif_distincte(795, 214) << endl;
    cout << "b) " << min_2_cif_comune(715, 514) << endl;
    cout << "c) " << prietene(220, 284) << endl;
    cout << "d) " << prime(2, 9) << endl;
    return 0;
}