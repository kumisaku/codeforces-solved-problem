#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[101];
		cin >> s;
		int counta=0,countb=0;
		int len = strlen(s);
		int i;
		for(i=0;i<len;i++){
			if(s[i] == 'A')counta++;
			if(s[i] == 'B')countb++;
		}
		if(counta > countb)cout << "A" << endl;
		else cout << "B" << endl;
	}
	return 0;
}
