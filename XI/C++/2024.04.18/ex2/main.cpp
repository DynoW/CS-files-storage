#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char v[100][100];
    int n, k;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin.getline(v[i], 100);
    }
    int g = strlen(v[k]);
    for (int i = 0; i < n; i++)
    {
        if (i != 3)
        {
            int ct = 1;
            int daba;
            daba = strlen(v[i]);
            for (int j = 0; j < g; j++)
            {
                if (v[i][daba - j] != v[k][g - j])
                {
                    ct = 0;
                }
            }
            if (ct == 1)
                cout << v[i] << " ";
        }
    }
}