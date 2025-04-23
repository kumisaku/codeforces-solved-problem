#include <iostream>
#include <cmath>

using namespace std;

//int main(){
//	int t;
//	cin >> t;
//	int sum=0,count;
//	int i;
//	for(i=1;i<=t;i++){
//		count = pow(-1,i)*i;
//		sum+= count;
//	}
//	cout << sum << endl;
//}

int recurs(long long int n){
	if(n>0){
		return pow(-1,n)*n + recurs(n-1);
	}
}


int main(){
	long long int t;
	cin >> t;
	cout << recurs(t) << endl;
	
	return 0;
}
