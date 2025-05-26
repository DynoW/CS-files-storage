#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
ifstream f("sir.in");
ofstream g("sir.out");

int n, a[101];
int main()
{
    f >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        f >> j;
        a[j]++;
    }
    for (int i = 10; i <= 99; i++)
        if (a[i] == 0)
            g << i << " ";
    return 0;
}
