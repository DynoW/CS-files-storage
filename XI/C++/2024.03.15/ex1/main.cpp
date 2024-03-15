#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int main()
{
    int vf[1000]={0};
    int n=0, x, ver=1;
    while (f>>x){
        vf[x]++;
    }
    for(int i=0;i<1000;i++){
        if(((vf[i]>i)||(vf[i]%2!=i%2))&&vf[i]!=0)
            ver=0;
    }
    if(ver==1){
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
