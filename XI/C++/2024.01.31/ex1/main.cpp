#include <iostream>

using namespace std;

/*Se citeste un nr, sa se calc nr cifrelor div cu 3 sunt in nr*/

int nr(int x){
    if(x==0){
        return 0;
    } else {
        if(x%10%3==0)
            return 1+nr(x/10);
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
