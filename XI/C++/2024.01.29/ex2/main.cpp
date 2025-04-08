#include <iostream>

using namespace std;

int suma(int n){
    if(n!=0)
        return n%10+suma(n/10);
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << suma(n);
    return 0;
}
