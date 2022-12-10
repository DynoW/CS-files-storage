#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<=i;j+=2)
        {
                cout<<j<<" ";

        }
        cout << endl;
    }
    return 0;
}
