#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[101];
		cin >> s;
		int len = strlen(s);
		int i;
		int count=0;
		for(i=0;i<len;i++){
			s[i] = toupper(s[i]);
			if(s[i] == s[i+1])count++;
		}
		if(count!=0)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
