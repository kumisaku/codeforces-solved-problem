#include<iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int count=0;
	if(a >= b){
		cout << 1 << endl;
	}else{
		while(a <= b){
			a*=3;
			b*=2;
			count++;
		}
		cout << count << endl;
 	}
	return 0;
}
