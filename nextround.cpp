#include<iostream>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int i;
	int x[n+1],count=0;
	for(i=0;i<n;i++){
		cin >> x[i];
	}
	for(i=0;i<n;i++){
		if(x[i] >= x[k-1] && x[i] > 0)count++;
	}
	
	cout << count << endl;
	
	
	return 0;
}
