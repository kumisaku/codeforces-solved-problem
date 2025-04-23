#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	char s[t+1];
	cin >> s;
	int i;
	for(i=0;i<t;i++){
		if(s[i] == s[i+1])continue;
		else cout << s[i];
	}
}
