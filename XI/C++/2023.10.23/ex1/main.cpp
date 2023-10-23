#include <iostream>
#include <fstream>
using namespace std;

int nr_div(int a)
{
    int d = 0, nrd = 0;
    for (d = 2; d <= a - 1; d++)
        if (a % d == 0)
            nrd++;
    return nrd;
}

int main()
{
    int n, i, maxdiv=0, cp;
    ifstream f("divizori.in");
    while(f>>n){
        if(maxdiv<=nr_div(n)){
            maxdiv=nr_div(n);
            cp=n;
        }
    }
    cout << cp;
    return 0;
}