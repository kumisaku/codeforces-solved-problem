#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int a1,a2,a3,a4;
	cin >> a1 >> a2 >> a3 >> a4;
	char s[100001];
	cin >> s;
	int len = strlen(s);
	int i;
	int sum=0;
	for(i=0;i<=len;i++){
		if(s[i] == '1')sum+=a1;
		if(s[i] == '2')sum+=a2;
		if(s[i] == '3')sum+=a3;
		if(s[i] == '4')sum+=a4;
	}
	cout << sum << endl;
	return 0;
}
