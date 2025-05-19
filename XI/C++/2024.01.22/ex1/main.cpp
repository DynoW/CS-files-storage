#include <iostream>
using namespace std;

struct data {
    int a, l, z;
}v[1001];

int main()
{
    int n, p, q, i;
    data pa, qa;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> v[i].a >> v[i].l >> v[i].z;
    }
    pa=v[1];
    p=1;
    qa=v[1];
    q=1;
    for(i=1;i<=n;i++){
        if(v[i].a<pa.a){
            pa=v[i];
            p=i;
        } else
        if(v[i].a==pa.a&&v[i].l<pa.l){
            pa=v[i];
            p=i;
        } else
        if(v[i].a==pa.a&&v[i].l==pa.l&&v[i].z<pa.z){
            pa=v[i];
            p=i;
        }


        if(v[i].a>qa.a){
            qa=v[i];
            q=i;
        } else
        if(v[i].a==qa.a&&v[i].l>qa.l){
            qa=v[i];
            q=i;
        } else
        if(v[i].a==qa.a&&v[i].l==qa.l&&v[i].z>qa.z){
            qa=v[i];
            q=i;
        }
    }
    cout << q << " " << p;
    return 0;
}
