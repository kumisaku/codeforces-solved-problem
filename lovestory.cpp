#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[11];
		cin >> s;
		int i;
		int count=0;
		int len = strlen(s);
		char fixed[] = "codeforces";
		for(i=0;i<len;i++){
			if(s[i] != fixed[i])count++;
		}
		cout << count << endl;
	}
	return 0;
}
