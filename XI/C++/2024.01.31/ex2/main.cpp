#include <iostream>

using namespace std;

/*Se citeste un nr, sa se calc suma cifrelor impare*/

int nr(int x){
    if(x==0){
        return 0;
    } else {
        if(x%2==1)
            return x%10+nr(x/10);
        else
            return nr(x/10);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << nr(n);
    return 0;
}
