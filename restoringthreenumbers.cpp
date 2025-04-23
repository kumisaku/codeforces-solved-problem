#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x[4];
	int i;
	int a,b,c;
	for(i=0;i<4;i++){
		cin >> x[i];
	}
	for(i=0;i<4;i++){
		if(x[i] < x[i+1]){
			swap(x[i],x[i+1]);
		}
		a = x[3]-x[0];
		b = x[3]-x[1];
		c = x[3]-x[2];

	}

	cout << a << ' ' << b << ' ' << c << endl;
	return 0;
}
