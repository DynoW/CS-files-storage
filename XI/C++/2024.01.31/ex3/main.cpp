#include <iostream>

using namespace std;

/*se citeste un v cu n elem
a) sa se calc suma nr pare din vector
b) sa se afis nr prime din v
*/

int n, v[100];

void citire(int i){
	if(i==0)
		cin >> n;
	if(i<n){
		cin >> v[i];
		citire(i+1);
	}
}

int pare(int i){
    if(i<n){
        if(v[i]%2==0)
            return v[i]+pare(i+1);
        else return pare(i+1);
    } else return 0;
}

void prim(int i){
    int ct=0;
    if(i<n){
        for(int c=1;c<=v[i];c++){
            if(v[i]%c==0){
                ct++;
            }
        }
        if(ct==2){
            cout << v[i] << " ";
        }
        prim(i+1);
    }
}

int main()
{
    citire(0);
    cout << pare(0) << " ";
    prim(0);
    return 0;
}
