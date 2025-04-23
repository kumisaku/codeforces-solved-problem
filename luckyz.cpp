#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char n[101];
		cin >> n;
		int len = strlen(n);
		int i;
		int sum1=0,sum2=0;
		for(i=0;i<=len/2-1;i++){
			sum1+=n[i];
		}
		for(i=len/2;i<=len;i++){
			sum2+=n[i];
		}
		if(sum1==sum2)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
