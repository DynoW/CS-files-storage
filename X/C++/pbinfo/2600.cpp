#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a;
    cin >> a;
    long long int expr = a*a + a*a*a*a;
    long long int x = 3 * expr;
    double y = expr + (double)sqrt(expr);
    double z = (double)sqrt(expr);
    double rasp = x / y + z;
    cout << (int)rasp;
    return 0;
}