#include <iostream>

using namespace std;

int main()
{
    int n,s,cop;
    cin >> n;
    while(n!=0){
        s=0;
        cop=n;
        while(cop!=0){
            s=s+cop;
            cop=cop/10;
        }
        if(s%2==0){
            cout << n << ' ';
        }
        cin >> n;
    }

    return 0;
}
