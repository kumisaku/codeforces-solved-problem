#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int a[n+1];
		int i;
		long long int sum=0;
		for(i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		long long int temp = sqrt(sum);
		if(temp*temp == sum)cout <<"YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
