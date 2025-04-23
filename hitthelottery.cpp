#include<iostream>

using namespace std;

int main(){
	int n;
	int count=0;
	cin >> n;
	while(n--){
		if(n >= 100){
			n-=100;
			count++;
		}
		if(n>=20){
			n-=20;
			count++;
		}
		if(n>=10){
			n-=10;
			count++;
		}
		if(n>=5){
			n-=5;
			count++;
		}
		if(n>=1){
			n-=1;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
