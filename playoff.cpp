#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int result  = pow(2,n);
		cout << result-1 << endl;
	}
	return 0;
}
