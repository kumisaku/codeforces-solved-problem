#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	int a[t];
	int i,j;
	for(i=0;i<t;i++){
		cin >> a[i];
	}
	for(i=t-1;i>=0;i--){
		if(a[i] == a[i-1] || a[i] == a[i-2])continue;
		cout << a[i] << ' ';
	}
	
	return 0;
}
