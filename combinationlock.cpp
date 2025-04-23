#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	string s, s1;
	cin >> s >> s1;
	int sum=0;
	int i;
	for(i=0;i<t;i++){
		sum+= min(abs(s[i]-s1[i]),10 - abs(s[i]-s1[i]));
	}
	cout << sum << endl;
	return 0;
}

