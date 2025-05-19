/*Se citeste o fraza sa se afis nr aparitiilor ultimului caract din fraza in toata fraza*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int ct=0;
    char f[256];
    cin.get(f,256);

    for(int i=0;i<strlen(f);i++){
        if(f[i]==f[strlen(f)-1])
            ct++;
    }
    cout << ct;
}
