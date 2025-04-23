#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x[101];
	int sum=0;
	int i;
	for(i=0;i<=n;i++){
		cin >> x[i];
	}
	for(i=1;i<=n;i++){
		if((x[i+1] < x[i] && x[i+1] > x[i-1])){
			sum++;
		}else if(x[i+1] > x[i] && (x[i+1] < x[i-1] || x[i+1] > x[i-1]) ){
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
