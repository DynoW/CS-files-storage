#include <iostream>

using namespace std;

void citire(int v[100],int&n){
    int i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
}

int perf(int n){
    int s=0, d;
    for(d=1;d<n;d++){
        if(n%d==0){
            s=s+d;
        }
    }
    if(s==d)
        return 1;
    else
        return 0;
}

void suma(int v[100], int n){
    int i, s=0;
    for(i=0;i<n;i++)
        if(perf(v[i])==1)
            s=s+v[i];
    cout << s << " ";
}

void ordonare(int v[100], int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i]%2==0&&v[j]%2==0)
                if(v[i]<v[j])
                    swap(v[i], v[j]);
        }
    }
}

void afisare(int v[100],int&n){
    int i;
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
}

int identic(int n){
    int c=n%10, ok=1;
    while(n!=0){
        if(c!=n%10)
            ok = 0;
        n=n/10;
    }
    if(ok==1)
        return 1;
    else
        return 0;
}

void sumai(int v[100], int n){
    int i, s=0;
    for(i=0;i<n;i++)
        if(identic(v[i])==1)
            s=s+v[i];
    cout << s << " ";
}

int main()
{
    int n, v[100];
    citire(v, n);
    suma(v, n);
    cout << endl;
    ordonare(v, n);
    afisare(v, n);
    cout << endl;
    sumai(v, n);
    return 0;
}
