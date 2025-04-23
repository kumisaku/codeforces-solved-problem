#include<iostream>

using namespace std;

int main(){
	char s[100001];
	int a=0,d=0;
	int n;
	cin >> n;
	int i;
	for(i=0;i<n;i++){
		cin >> s;
		if(s[i]=='A')a++;
		if(s[i]=='D')d++;
	}
	if(a > d)cout << "Anton" << endl;
	else if (d > a)cout << "Danik" << endl;
	else cout << "Friendship" << endl;
	return 0;
}
