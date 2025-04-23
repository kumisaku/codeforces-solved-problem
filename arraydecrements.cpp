#include<iostream>

using namespace std;

int main(){
	int t;
	cin >>  t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		int i;
		int good = 0;
		for(i=0;i<n;i++){
			cin >> a[i];
			cin >> b[i];
			int res = a[i] - b[i];
			if(a[i] == 0)continue;
			if(a[i] - b[i] == res)good=1;
			else good =0;
			
		}
		if(good!=0)cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
	return 0;
}
