#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,n,v=0;
    ifstream f("bac.txt");
    cin >> n;
    while(f>>a){
        if(a%n==0){
            v=1;
            cout << a << " ";
        }
    }
    if (v==0){
        cout << "NU EXISTA";
    }

    return 0;
}
