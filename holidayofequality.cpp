#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	int i;
	int min=__INT_MAX__;
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i] < min)min = a[i];
	}
	cout << min << endl;
	for(i=0;i<n;i++){
		
	}
	return 0;
}
