#include <iostream>

using namespace std;

int main(){
	int n,h;
	cin >> n >> h;
	int sum=0,total=0;
	while(n--){
		int x;
		cin >> x;
		if(x > h)sum=2;
		else sum=1;
		total += sum;
	}
	cout << total << endl;
	return 0;
}
