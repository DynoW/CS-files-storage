#include <iostream>

using namespace std;

int main()
{
    int n,i,i2,s=0,v=0,s2=0,cop,x,ct=1;
    cin>>n;
    while(ct!=n){
        cin>>x;
        for(i=1;i<=(x/2);i++){
            if(x%i==0){
                s=s+i;
            }
        }
        if(s==x){
            s2=s2+x;
        }
        ct=ct+1;
    }
    cout<<s2;
    return 0;
}
