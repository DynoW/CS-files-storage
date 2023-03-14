#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, sp, si, cmmdc;
    ifstream f("date.in");
    ofstream g("date.out");
    while(f>>n){
        si=0;
        sp=0;
        while(n!=0){
            if(n%10%2==0){
                sp=sp+n%10;
            } else {
                si=si+n%10;
            }
            n=n/10;
        }
        if(si*sp==0){
            cmmdc = si+sp;
        }
        else {
            while(si!=sp){
                if(si>sp)
                    si=si-sp;
                else
                    sp=sp-si;
            }
            cmmdc = si;
        }
        g << cmmdc;

    }
    return 0;
}
