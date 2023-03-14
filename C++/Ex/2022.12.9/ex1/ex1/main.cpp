#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,i, x, cop, ogl;
    ifstream f("date.in");
    ofstream g("date.out");
    f>>n;
    for(i=1;i<=n;i++){
        f>>x;
        cop=x;
        ogl=0;
        while(x!=0){
            ogl=ogl*10+x%10;
            x=x/10;
        }
        if(cop%10==ogl%10){
            g<<cop<<" ";
        }
    }
    return 0;
}
