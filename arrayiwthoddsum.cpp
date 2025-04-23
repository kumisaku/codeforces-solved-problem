#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[101];
		int i;
		int j;
		int count=0;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				int total = a[i] + a[j];
				if(total % 2 != 0)count++;
			}
		}
		if(count!=0)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
