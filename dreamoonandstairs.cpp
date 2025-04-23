#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	n = n/2 + 2;
	if(n%m == 0)cout << n << endl;
	else cout << -1 << endl;
	
	return 0;
}
