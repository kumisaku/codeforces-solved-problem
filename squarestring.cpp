#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int isFound = 0;
		for(int i = 0; i < s.size();i++){
			if(s[i] == s[i+1]){
				isFound = 1;
				break;
			}
		}
		if(isFound == 1)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
