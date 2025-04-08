#include <iostream>
using namespace std;int main(){   int a[100][100],i,j,k,n;cin>>n>>k;for(i=0;i<n;i++)for(j=0;j<n;j++)cin>>a[i][j];cout<<endl;k--;for(i=0;i<k;i++){swap(a[i][k],a[k][i]);}for(i=0;i<n;i++){for(j=0;j<n;j++)cout<<a[i][j]<<" ";    cout<<endl;    }    return 0;}
