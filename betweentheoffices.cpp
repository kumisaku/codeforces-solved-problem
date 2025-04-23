#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	int count=0;
	int i;
	for(i=0;i<s.length();i++){
		if(s[i] == 'S' && s[i+1] == 'F')count++;
		if(s[i] =='F' && s[i+1] == 'S')count--;
	}
	if(count >= 1)cout << "YES" << endl;
	else cout <<"NO" << endl;
	return 0;
}
