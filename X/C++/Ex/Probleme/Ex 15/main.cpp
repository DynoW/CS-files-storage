#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,ogl,cop;
    ifstream f("date.in");
    ofstream g("date.out");
    while(f >> n){
        cop = n;
        ogl = 0;
        while(cop!=0){
            ogl=ogl*10+cop%10;
            cop=cop/10;
        }
        if(n==ogl){
            g << n << " ";
        }
    }


    return 0;
}
