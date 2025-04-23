#include<iostream>
#include<string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int a = s.size();
	int b = 0;
	while(b < a){
		if(s[b] == '.'){
			cout << "0";
			b+=1;
		}
		if(s[b] == '-' && s[b+1] == '.'){
			cout << "1";
			b+=2;
		}
		if(s[b] == '-' && s[b+1] == '-'){
			cout << "2";
			b+=2;
		}
	}
	return 0;
}
