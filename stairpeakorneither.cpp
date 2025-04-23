#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	while(x--){
		int a,b,c;
		cin >> a >> b >> c;
		if(b > a && b < c)cout << "STAIR" << endl;
		else if(b > c && b > a)cout << "PEAK" << endl;
		else cout << "NONE" << endl;
	}
	return 0;
}
