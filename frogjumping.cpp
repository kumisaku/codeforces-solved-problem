#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,k;
		cin >> a >> b >> k;
		cout << (a - b) * 1ll * (k / 2) + a * (k & 1) << endl;
	}
	return 0;
}
