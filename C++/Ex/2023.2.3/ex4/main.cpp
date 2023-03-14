#include <iostream>

using namespace std;

int main()
{
    int i, n, v[100], perfect=0, vprim=0, vperfect=0, s, i2, ct, i3;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        if(vprim!=1){
            ct = 0;
            for(i2=1;i<=v[i];i++){
                if(v[i]%i2==0){
                    ct=ct+1;
                }
            }
            if(ct==2){
                cout << v[i] << " ";
                vprim = 1;
            }
        }
        s=0;
        for(i3=1;i3<=v[i];i3++){
            if(v[i]%i3==0){
                s=s+i3;
            }
        }
        if(s==v[i]){
            perfect = v[i];
            vperfect = 1;
        }
        if(vperfect==1)
        cout << perfect << " ";
    }
    return 0;
}
