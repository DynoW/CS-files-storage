#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int a,b = 0; 
    int i;
    for (i=0;i<10;i++){ b = a; a = i; } 
    cout<<b;
    return 0;
}
