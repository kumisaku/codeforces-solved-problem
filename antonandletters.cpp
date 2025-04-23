#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);	
	int i,count=0;
	char er[] = " {,}";
	sort(s.begin(),s.end());
	for(i=0;i<s.size();i++){
		if(s[i] == ' ' || s[i] == '{' || s[i] == ',' || s[i] == '}')continue;
		if(s[i] != s[i+1])count++;
	}
	cout << count << endl;
	return 0;
}
