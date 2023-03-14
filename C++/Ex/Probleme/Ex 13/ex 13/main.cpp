#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    ofstream g("nr.txt");
    while(n>=10){
        g << n << " ";
        n=n/10;
    }
    g << n;
    return 0;
}
