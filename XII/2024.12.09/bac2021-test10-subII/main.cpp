#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i;
    char s[20],t[20];
    strcpy(s,"vorbeste");
    s[3]=s[0]; s[5]=s[2]; s[0]=s[1]+1; s[2]=s[1]-2; s[6]=s[4]-1;
    strcpy(t,s); t[3]='\0';
    cout<<t<<endl<<s+3;
    return 0;
}