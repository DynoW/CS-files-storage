#include <iostream>


using namespace std;

int main()
{
    int n, v[100], i, ok, i2, ct, v2[100], ct2=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        ct=0;
        for(i2=1;i2<=v[i];i2++){
            if(v[i]%i2==0){
                ct=ct+1;
            }
        }
        if(ct==2){
            v2[ct2] = v[i];
            ct2++;
        }
    }
    do{
        ok=1;
        for(i=0;i<ct-1;i++){
            if(v2[i]>v2[i+1]){
                ok=0;
                swap(v2[i],v2[i+1]);;
            }
        }
    }while(ok==0);
    for(i=0;i<ct2;i++){
        cout << v2[i] << " ";
    }
    return 0;
}
