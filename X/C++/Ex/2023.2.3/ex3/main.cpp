#include <iostream>

using namespace std;

int main()
{
    int i, n, v[100],cop ,ogl;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=1;i<=n;i++){
        cop=v[i];
        ogl=0;
        while(cop!=0){
            ogl=ogl*10+cop%10;
            cop=cop/10;
        }
        if(v[i]==ogl){
            cout << ogl << " ";
        }
    }
    return 0;
}
