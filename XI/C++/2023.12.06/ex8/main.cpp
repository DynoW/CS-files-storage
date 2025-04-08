#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char q[20][21];
    int n, k, i;
    cin >> n >> k;

    for (i = 0; i < n; i++) {
        cin >> q[i];
    }

    char *suffix = q[k - 1];

    int found = 0;
    for (i = 0; i < n; i++) {
        if (i != k - 1) {
            int len1 = strlen(q[i]);
            int len2 = strlen(suffix);

            if (len1 >= len2 && strcmp(q[i] + len1 - len2, suffix) == 0) {
                cout << q[i] << " ";
                found = 1;
            }
        }
    }

    if (!found) {
        cout << "nu exista";
    }

    return 0;
}
