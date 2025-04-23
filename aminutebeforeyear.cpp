#include<iostream>
#include<cmath>
#include<stdlib.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int h,m;
		int totalminutes;
		cin >> h >> m;
		totalminutes = h*60 + m;
		cout << abs(1440-totalminutes) << endl;
	}
	return 0;
}
