#include <iostream>
#include <fstream>

using namespace std;

struct fractie{
    int x, y;
}v[100];

int cmmdc(int a, int b){
    if(a*b==0){
        return a+b;
    } else {
    while(a!=b){
        if(a>b){
            a=a-b;
        } else {
            b=b-a;
        }
    }
    }
    return a;
}

fractie suma(fractia g, fractie f){
    fractie s;
    s.x=f.x*g.y+g.x*f.y
    s.y=g.y*g.x
}

int main()
{
    ifstream f("atestat.in");
    ofstream g("atestat.out");
    int i, n, o;
    f >> n;
    for(i=0;i<n;i++)
        f >> v[i].x >> v[i].y;
    fractie s;
    s.x=0;s.y=1;
    for(i=0;i<n;i++);
        if(cmmdc(v[i].y, v[i].x)==1)
            s=suma (suma,v[i]);
            c=cmmdc(s.x,s.y);
    s.x=s.x/c
    s.y=s.y/c
    g << s.x << " " << s.y;
    cout <<endl;
    return 0;
}
