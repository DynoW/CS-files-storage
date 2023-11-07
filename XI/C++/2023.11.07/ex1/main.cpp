#include <iostream>

using namespace std;



float medie(int n, int v[100]){
    int s=0, ct=0;
    for (int i=0;i<n;i++){
        if(v[i]%2==0){
            s=s+v[i];
            ct++;
        }
    }
    if(s==0)
        return 0;
    else
        return s/ct;
}

int main(){
    int n, v[100];
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << medie(n, v);
    return 0;
}