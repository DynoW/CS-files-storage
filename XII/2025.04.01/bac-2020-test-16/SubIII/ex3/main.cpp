#include <iostream>
using namespace std;

int main() {
  int a[100], b[100], c[200], m, n, l1 = 0, l2 = 0, l3 = 0, i;

  cin >> m >> n;

  for (i = 0; i < m; i++) cin >> a[i];
  for (i = 0; i < n; i++) cin >> b[i];

  if (a[l1] > b[l2]) {
    c[l3] = b[l2];
    l2++;
  } else {
    c[l3] = a[l1];
    l1++;
  }
  l3++;

  while (l1 <= m - 1 && l2 <= n - 1) {
    while (a[l1] <= c[l3 - 1]) l1++;
    while (b[l2] <= c[l3 - 1]) l2++;

    if (c[l3 - 1] % 2 == 0) {
      if (a[l1] % 2 == 1) {
        c[l3] = a[l1];
        l1++;
        l3++;
      } else if (b[l2] % 2 == 1) {
        c[l3] = b[l2];
        l2++;
        l3++;
      }
    } else {
      if (a[l1] % 2 == 0) {
        c[l3] = a[l1];
        l1++;
        l3++;
      } else if (b[l2] % 2 == 0) {
        c[l3] = b[l2];
        l2++;
        l3++;
      }
    }
  }
  while (l1 <= m - 1) {
    if (c[l3 - 1] > a[l1])
      l1++;
    else if (c[l3 - 1] % 2 == 0)
      if (a[l1] % 2 == 1) {
        c[l3] = a[l1];
        l1++;
        l3++;
      } else
        l1++;
    else if (a[l1] % 2 == 0) {
      c[l3] = a[l1];
      l1++;
      l3++;
    } else
      l1++;
  }
  while (l2 <= n - 1) {
    if (c[l3 - 1] > b[l2])
      l2++;
    else if (c[l3 - 1] % 2 == 0)
      if (b[l2] % 2 == 1) {
        c[l3] = b[l2];
        l2++;
        l3++;
      } else
        l2++;
    else if (b[l2] % 2 == 0) {
      c[l3] = b[l2];
      l2++;
      l3++;
    } else
      l2++;
  }

  for (i = 0; i < l3; i++) cout << c[i] << " ";
  return 0;
}