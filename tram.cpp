#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	int count=0, minAs=0;
	while(t--){
		int a,b;
		cin >> a >> b;
		count = b + (count-a);
		if(count > minAs)minAs = count;
	}
	
	cout << minAs << endl;
	return 0;
}
