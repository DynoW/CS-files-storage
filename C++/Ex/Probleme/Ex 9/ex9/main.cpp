#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b,s;
    ifstream f("date.in");
    ofstream g("date.out");
    f >> a >> b;
    s = a+b;
    g << s;

    return 0;
}
