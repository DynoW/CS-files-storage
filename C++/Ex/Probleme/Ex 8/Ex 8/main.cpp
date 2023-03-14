#include <iostream>

using namespace std;

int main()
{
    int n,si,sp,cop,cmmdc;
    cin >> n;
    while(n!=0){
        cop=n;
        sp=0;
        si=0;
        while(cop!=0){
            if(cop%2==0){
                sp=sp+cop%10;
            }
            else{
                si=si+cop%10;
            }
            cop=cop/10;
        }
        if(si*sp==0){
            cmmdc=si+sp;
        }
        else{
            while(si!=sp){
                if(si>sp){
                    si=si-sp;
                }
                else{
                    sp=sp-si;
                }
            }
            cmmdc=sp;
        }
        if(cmmdc==1){
            cout << n << " ";
        }else{
            cout << "No thx" << " ";
        }
        cin >> n;
    }
    return 0;
}
