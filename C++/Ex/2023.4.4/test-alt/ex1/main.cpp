#include <iostream>

using namespace std;

int main(){
    int n, i, v[100], max=0;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        if((v[i]%2==0)&&(v[i]>max)){
            // Merge si cu 2 if-uri
            max = v[i];
        }
    }
    for(i=0;i<n;i++){
        cout << max;
    }
    return 0;
}