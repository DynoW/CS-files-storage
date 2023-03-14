#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, max1=0, max2=0, ct=0, max3=0;
    ifstream f("numere.txt");
    while(f>>a){
        if(max1<a&&a%2==0){
            ct=1;
            max3=max2;
            max2=max1;
            max1=a;
        }
        else if(max2<a&&a%2==0) {
            max3=max2;
            max2=a;
            ct=2;
        }
        else if(max3<a&&a%2==0) {
            max3=a;
            ct=2;
        }
    }
    if(ct!=0)
        cout << max3 << " " << max2 << nax1;
    else
        cout << "0";

    return 0;
}
