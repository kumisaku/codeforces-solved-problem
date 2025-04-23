#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[101];
		cin >> s;
		int len = strlen(s);
		int i;
		int isabc = 0;
		for(i=0;i<len;i++){
			if(s[0] == 'a' && s[1] == 'b' && s[2] == 'c')isabc = 1;
			else{
				isabc = 0;
				if(s[2] == 'b' && s[1] == 'c' && s[0] == 'a')isabc = 1;
				else if(s[1] == 'a' && s[0] == 'b' && s[2] == 'c')isabc = 1;
				else if(s[0] == 'c' && s[1] == 'b' && s[2] == 'a')isabc = 1;
			}
		}
		if(isabc == 1)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
