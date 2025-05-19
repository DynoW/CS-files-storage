#include <iostream>
using namespace std;

int main() {
    int n, k, i, j, a[100][100];
    cin >> n;
    cin >> k;
    k--;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << endl;
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i==k&&j<k) {
                swap(a[i][j], a[j][i]);
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}