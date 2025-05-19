#include <iostream>
using namespace std;

int maxim(int n, int max){
    if(n!=0)
        if(n%2!=0)
            if(max<n%10){
                max=n%10;
                return maxim(n/10,max);
            }
            else
                return maxim(n/10,max);
        else
            return maxim(n/10,max);
    else
        return max;
    
}

int main(){
    cout << maxim(54372, 0);
    return 0;
}