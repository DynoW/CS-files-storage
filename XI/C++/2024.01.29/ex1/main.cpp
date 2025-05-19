#include <iostream>

using namespace std;

int fact(int n, int i){
	if(i<=n)
		return i*fact(n,i+1);
	else
		return 1;
}

int main(){
	int n;
	cin >> n;
	cout << fact(n,1);
	return 0;
}
