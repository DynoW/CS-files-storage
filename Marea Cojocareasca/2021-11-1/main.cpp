#include <iostream>

using namespace std;
void imog(int x,int y,int&rez){
int ogl=0,ogl2=0;
while(x){
    if(x%2==1){
        ogl=ogl*10+x%10;
    }
    x=x/10;
}

while(ogl){
    ogl2=ogl2*10+ogl%10;
    ogl=ogl/10;
}

ogl=0;
while(y){
    if(y%2==1){
        ogl=ogl*10+y%10;
    }
    y=y/10;
}
if(ogl2==ogl)
    rez=1;
else
    rez=0;

}
int main()
{
    int x = 0;
    imog(523,84536,x);
cout<<x;
    return 0;
}
