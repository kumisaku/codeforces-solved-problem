#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	char s[101];
	cin >> s;	
	for(int i =0;i < t;i++){
		s[i] = tolower(s[i]);
	}
	sort(s,s+t);
	int count = 0;
	for(int i = 0;i < t;i++){
		if(s[i]!=s[i+1])count++;
	}
	if(count == 26)cout <<"YES\n";
	else cout << "NO\n";
	return 0;
}
