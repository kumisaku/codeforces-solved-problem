#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int max1,max2;
		int min1,min2;
		max1= max(a,b);
		max2= max(c,d);
		min1=min(a,b);
		min2=min(c,d);
		if(max1 > min1 && max1 > min2 && max2 > min2 && max2 > min1)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
