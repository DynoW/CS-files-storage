#include <iostream>
#include <fstream>
using namespace std;

void secv_tablou(int n,int v[100], int a, int b)
{
    int i;
    for(i=a;i<=b;i++)
        cout<<v[i]<<" ";
    cout << endl;
}                                                                                                       

int main()
{
    int n, a, b, v[100], i, k, j, ok=0;
    ifstream f("secventa_k.in");
    cin >> k;
    f >> n;
    for(i=1;i<=n;i++){
        f >> v[i];
    }
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(v[i]==v[j]&&v[i]==k){
                secv_tablou(n, v, i, j);
                ok=1;
            }
        }
    }
    if(ok==0)
        cout << "imposibil";
    return 0;
}