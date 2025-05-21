#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100], i, j, S1=0, S2=0, S3=0, S4=0, s[3];
    cin >> n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i<j&&i+j<n-1)
                S1=S1+v[i][j];
            else if(i>j&&i+j<n-1)
                S2=S2+v[i][j];
            else if(i>j&&i+j>n-1)
                S3=S3+v[i][j];
            else if(i<j&&i+j>n-1)
                S4=S4+v[i][j];
    s[0]=S1;
    s[1]=S2;
    s[2]=S3;
    s[3]=S4;
    for(i=0;i<=3;i++)
        for(j=i+1;j<=3;j++){
            if(s[i]>s[j]){
                swap(s[i],s[j]);
            }
        }
    for(i=0;i<=3;i++){
        cout << s[i] << " ";
    }
    return 0;

}
