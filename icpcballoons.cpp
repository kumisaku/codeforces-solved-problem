#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char s[n+1];
		int i;
		int count=0;
		for(i=0;i<n;i++){
			cin >> s[i];
			s[i] -= 'a';
			if(s[i] < s[i+1])swap(s[i],s[i+1]);
		}
		for(i=0;i<n;i++){
						if(s[i] == s[i+1])count+=1;
			else count+=2;
		}
		cout << count << endl;
	}
	return 0;
}
