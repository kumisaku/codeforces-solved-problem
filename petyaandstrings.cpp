#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

void compare(char s1[],char s2[]){
	int result = strcmp(s1,s2);
	cout << result << endl;
}

int main(){
	char s[1001],ss[1001];
	cin >> s >> ss;	
	strlwr(s);
	strlwr(ss);
	compare(s,ss);
	return 0;
}
