#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");

struct elev {
    int nrmatricol, an, luna, zi;
}v[100];

int main(){
    int n, i, j, zi, luna;
    f >> n;
    f >> zi >> luna;
    for(i=0;i<n;i++){
        f >> v[i].nrmatricol >> v[i].zi >> v[i].luna >> v[i].an;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i].an > v[j].an)
                swap(v[i],v[j]);
            else if(v[i].an == v[j].an && v[i].luna > v[j].luna)
                swap(v[i], v[j]);
            else if(v[i].an == v[j].an && v[i].luna == v[j].luna && v[i].an == v[j].an && v[i].zi > v[j].zi)
                swap(v[i], v[j]);
        }
    }
    for(i=0;i<n;i++){
        if(v[i].luna==luna){
            if(v[i].zi>zi){
                cout << v[i].nrmatricol << " " << v[i].zi << " " << v[i].luna << endl;
            }
        } else if (v[i].luna > luna){
            cout << v[i].nrmatricol << " " << v[i].zi << " " << v[i].luna << endl;
        }
    }
    return 0;
}