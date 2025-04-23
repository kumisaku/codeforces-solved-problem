#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[] = "codeforces";
		char c;
		cin >> c;
		int len = strlen(s);
		int i;
		bool isFound = false;
		for(i=0;i<len;i++){
			if(s[i] == c)isFound = true;
		}
		if(isFound)cout <<"YES" <<endl;
		else cout <<"NO" << endl;
	}

	
	return 0;
}
