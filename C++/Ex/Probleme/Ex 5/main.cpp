#include <iostream>

using namespace std;

int main()
{
    int n, i, a, ct, i2,maxim = 0,ct2;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        ct = 0;
        for(i2=1;i2<=a;i2++){
            if (a%i2==0)
                ct = ct + 1;
        }
        if(ct==2){
            if(maxim<a){
                maxim = a;
                ct2 = 1;
            }
            else if (maxim==a)
                ct2 = ct2+1;
        }
    }
    cout << maxim << " " <<ct;
    return 0;
}
