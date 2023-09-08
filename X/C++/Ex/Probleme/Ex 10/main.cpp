#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a,b;
    ifstream f("date.in");
    ofstream g("date.out");
    f >> a >> b;
    if(a>b){
        g << a;
    }else{
        g << b;
    }

    return 0;
}
