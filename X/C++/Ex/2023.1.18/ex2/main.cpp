#include <iostream>

using namespace std;

int main()
{
    int v[1000],i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
        if(i%2==1){
            cout<<v[i]<<" ";
        }
    }
    if(n%2==0){
        n--;
    }
    cout << endl;
    for(i=n;i>=0;i--){
        if(i%2==0){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
