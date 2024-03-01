#include <iostream>
#include <fstream>
using namespace std;

ifstream f("permutari2.in");
ofstream g("permutari2.out");



int n, v[100], st[100];

void afis(int k) {
    for(int i=0;i<n;i++){
        g << v[st[i]] << " ";
    }
    g << endl;
}

void back(int k){
    int i,ok,j;
    for(i=0;i<n;i++){
        st[k]=i;
        ok=1;

        for(j=0;j<k;j++)
            if(st[j]==st[k])
                ok=0;

        if(ok==1){
            if(k==n-1)
                afis(k);
            else
                back(k+1);
        }
}}

int main(){
    f >> n;
    for(int i=0;i<n;i++){
        f >> v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j])
                swap(v[i],v[j]);
        }
    }
    back(0);
    return 0;
}