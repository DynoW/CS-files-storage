#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, a, i, i2, ct;
    ifstream f("date.in");
    ofstream g("date.out");
    f>>a;
    for(i=1;i<=a;i++){
        f>>n;
        ct=0;
        for(i2=1;i2<=n;i2++){
            if(n%i2==0){
                ct=ct+1;
            }
        }
        if (ct==2){
            g<<n<<" ";
        }
    }

    return 0;
}
