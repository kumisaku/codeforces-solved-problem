#include<iostream>

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int b;
		cin >> b;
		int i;
		int a[b+1];
		int sum=0;
		for(i=0;i<b;i++){
			cin >> a[i];
		}
		for(i=0;i<b;i++){
			sum+= a[i];
		}
		
		if(sum%2==0)cout << "YES" << endl;
		else cout << "NO" <<endl;
		 
		
	}
	return 0;
}
