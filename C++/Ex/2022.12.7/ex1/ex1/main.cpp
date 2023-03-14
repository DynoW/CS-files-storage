#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, max1=0, max2=0, max3=0;
    ifstream f("date.in");
    ofstream g("date.out");
    while(f>>n){
        if(n%10==5){
            if(max1<n){
                max3=max2;
                max2=max1;
                max1=n;
            }
            else if(max2<n){
                max3=max2;
                max2=n;
            }
            else if(max3<n){
                max3=n;
            }
        }
    }
    g << max1 << " " << max2 << " " << max3;
    return 0;
}
