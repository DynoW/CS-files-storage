#include <iostream>

using namespace std;

int main()
{
    int n,i,ma,s=0,ct=0;
    cin>>n;
    while (n!=0){
        s=s+n;
        ct=ct+1;
        cin>>n;
    }
    ma=s/ct;
    cout<<ma;
    return 0;
}
