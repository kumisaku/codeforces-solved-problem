#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
	char s[1001];
	cin >> s;
	int len = strlen(s);
	int i;
	for(i=0;i<len;i++){
		s[0] = toupper(s[0]);
		cout << s[i];
	}
	return 0;
}
