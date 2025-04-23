#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	long long int k,n,w;
	cin >> k >> n >> w;
	long long int sum = 0,i;	
	for(i=1;i<=w;i++){
		sum += k*i;
	}
	if(sum <= n){
		cout << 0 << endl;
	}else{
		sum -= n;
		cout << sum << endl;	
	}
	return 0;
}
