#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int n, v[10], ct = 0, st, dr;
    f >> n;
    for (int i = 0; i < n; i++)
        f >> v[i];
    while (f>>st>>dr)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] < st && dr > v[i])
                ct++;
        }
    }
    cout << endl << ct;
}