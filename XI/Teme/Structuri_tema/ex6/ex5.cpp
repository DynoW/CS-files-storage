#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream f("puncte.in");

struct punct {
    float x,y;
}v[100];

float distanta(punct A, punct B) {
    return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}

int main(){
    int n, i, ct=0;
    float r;

    punct O;
    O.x=0;
    O.y=0;

    f >> r >> n;

    for(i=0;i<n;i++){
        f >> v[i].x >> v[i].y;
    }
    for(i=0;i<n;i++){
        if(distanta(O, v[i]) == r){
            cout << "(" << v[i].x << ", " << v[i].y << ")" << endl;
            ct=1;
        }
    }
    if(ct==0)
        cout << "nu exista";
    return 0;
}