#include <iostream>
#include <cmath>
using namespace std;
/**
Se citesc coord carteziene a n pct in plan. Pct form un poligon convex, calc si afis aria poligonului
**/

struct punct {
    int x,y;
} v[100];

float latura(punct A, punct B){
    return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}

float aria(punct A, punct B, punct C){
    float l1,l2,l3,p;
    l1=latura(A,B);
    l2=latura(B,C);
    l3=latura(A,C);
    p=(l1+l2+l3)/2;
    return sqrt(p*(p-l1)*(p-l2)*(p-l3));
}

int main()
{
    int n, i;
    cin >> n;
    for(i=0;i<n;i++
    ){
        cin >> v[i].x >> v[i].y;
    }
    float At;
    At=0;
    for(i=1;i<n-1;i++){
        At=At+aria(v[0],v[i],v[i+1]);
        cout << At;
    }
    return 0;
}
