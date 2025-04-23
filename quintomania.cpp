#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int i;
		int isfound=0;
		
		for(i=0;i<n;i++){
			cin >> a[i];
			
		}
		for(i=0;i<n;i++){
			
			int res = abs(a[i] - a[i+1]);
			if(res == 5 || res == 7)isfound++;
		}
		if(isfound == n-1)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
