#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a1,a2,a3;
	int b1,b2,b3;
	
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	int sum1 = (a1+a2+a3);
	int sum2 = (b1+b2+b3);
	sum1 = (sum1 + 5-1)/5;
	sum2 = (sum2 + 10-1)/10;
	int n;
	cin >> n;
	if(sum1+sum2 > n)cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0; 
}
