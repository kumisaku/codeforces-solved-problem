#include<iostream>

using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	int sum;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	k *= l;
	l = k / nl;
	c *= d;
	p = p/np;
	int temp;
	if(l < c && l < p)temp = l;
	else if(c < l && c < p)temp = c;
	else temp = p;
	sum = temp/n;
	cout << sum << endl;
	return 0;
}
