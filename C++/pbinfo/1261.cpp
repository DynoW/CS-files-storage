#include <iostream>
using namespace std;

int main()
{
    long long n, K=0;
    cin >> n;
    while(n!=0){
        if(n%2==0)
            K=K+1;
        cin >> n;
    }
    if(K==0)
        cout << "NU EXISTA";
    else
        cout << K;
    return 0;
}