#include <iostream>
#include <cmath>
using namespace std;

/**
Se citesc raza si coord cart ale centrului unui cerc, iar apoi n pct in plan. Afis pct sit in interiorul cercului dat
**/

struct punct {
    int x,y;
} v[100];

float latura(punct A, punct B){
    return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}

int main()
{
    int n, i, r;
    cin >> v[0].x >> v[0].y;
    cin >> r;
    cin >> n;
    for(i=2;i<n+2;i++){
        cin >> v[i].x >> v[i].y;
    }
    cout  << endl;
    for(i=2;i<n+2;i++){
        if(r>=latura(v[0],v[i])){
            cout << v[i].x << " " << v[i].y << endl;
        }
    }
    return 0;
}
