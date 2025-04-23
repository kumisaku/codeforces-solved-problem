#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int i, index=0;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		int diff;
		for(i=0;i<n;i++){
			diff = a[0];
			if(a[0] != a[1]){
				diff = a[0];
				index = 1;
				break;
			}
			if(diff != a[i+1]){
				diff = a[i+1];
				index = i;
				break;
			}
			
		}
		cout << index << endl;
	}
	return 0;
}
