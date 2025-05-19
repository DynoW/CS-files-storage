#include <iostream>

using namespace std;

int sfx(int x){
    int u1=x%10, u2=x/10%10, u3=x/100%10;
    if(u3>u2 && u2>u1)
        return 1;
    else
        return 0;
}

int main(){
    int x=486128432;
    cout << sfx(x);
    return 0;
}