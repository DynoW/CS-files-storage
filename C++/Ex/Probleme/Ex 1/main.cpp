#include <iostream>
using namespace std;

int main()
{
    int i,i2,ct;
    for(i=1;i<100;i++){
        ct=0;
        for (i2=1;i2<=i;i2++){
            if (i%i2==0)
                ct=ct+1;
        }
        if (ct==2){
            cout<<i<<" ";
        }

    }
    return 0;
}
