#include <iostream>
#include <fstream>
using namespace std;

struct punct {
    float x, y;
};

float radical(float n) {
    float x = n;
    float y = 1;
    float e = 0.1;
    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

float distanta(punct A, punct B) {
    float dx = A.x - B.x;
    float dy = A.y - B.y;
    return radical(dx * dx + dy * dy);
}

int main() {
    ifstream fin("puncte.in");
    float r;
    int n;
    fin >> r >> n;
    punct p;
    punct origine = {0, 0};
    bool exista = false;
    for (int i = 0; i < n; i++) {
        fin >> p.x >> p.y;
        float d = distanta(p, origine);
        if (d > r - 0.1 && d < r + 0.1) {
            cout << "(" << p.x << "," << p.y << ")"<<endl;
            exista = true;
        }
    }
    if (!exista) {
        cout << "nu exista";
    }

    return 0;
}
