#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char s[101];
	char x[101];
	cin >> s >> x;
	int count=0;
	int len1 = strlen(s);
	int len2 = strlen(x);
	int i,j;
	for(i=0;i<len1 && i<len2;i++){
		count++;
		if(s[i] == x[i+1])break;
	}
	cout << count << endl;
}
