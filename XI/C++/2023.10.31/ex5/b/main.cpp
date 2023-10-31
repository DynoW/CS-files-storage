#include <iostream>
using namespace std;

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
    int n, i, v1[100], v2[100];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v1[i];
    }
    for(i=0;i<n;i++){
        cin >> v2[i];
    }
    for(i=0;i<n;i++){
        if(prime(v1[i],v2[i])==1)
            cout << v1[i] << " " << v2[i] << endl;
    }
    return 0;
}