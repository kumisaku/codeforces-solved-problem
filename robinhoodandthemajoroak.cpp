#include<iostream>
#include<cmath>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int sum=k/2;
		if(n%2!=0 && k%2!=0)sum++;
		if(sum%2==0)cout << "YES" << endl;
		else cout <<"NO" << endl;
	}
}
