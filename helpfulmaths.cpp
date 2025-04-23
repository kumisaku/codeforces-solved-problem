#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char s[101];
	cin >> s;
	int len = strlen(s);
	int i;
	for(i=0;i<len;i++){
		if(s[i] == '+')continue;
		if(s[i] > s[i+1]){
			swap(s[i],s[i+1]);
			cout << s[i];
		}
	}
	return 0;
}
