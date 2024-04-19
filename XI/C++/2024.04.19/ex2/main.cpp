#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char v[101], *p, v1[202];
    cin.get(v, 101);
    p = strtok(v, " ");
    while (p != NULL)
    {
        int ok = 1;
        for (int i = 0; i < strlen(p); i++)
        {
            if (strchr("aeiou", p[i]) == 0)
            {
                ok = 0;
            }
        }
        if (ok == 1)
        {
            strcat(v1, p);
            strcat(v1, " ");
        }
        strcat(v1, p);
        strcat(v1, " ");
        p = strtok(NULL, " ");
    }
    // strcat(v, v1);
    cout << v1;
    return 0;
}