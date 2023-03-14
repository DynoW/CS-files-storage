#include <iostream>

using namespace std;

int main()
{
    int a, d, p;
    cin >> a;
    d=2;
    while (a!=1){
        p=0;
       while (a%d==0){
            p=p+1;
            a=a/d;
        }
        cout << d << "^"<< p << " " ;
        d=d+1;
    }

    return 0;
}
