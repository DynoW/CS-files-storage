#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int x;
    fstream f("test.txt");
    while (!f.eof()){
        f>>x;
        cout<<x;
    }
    return 0;
}
