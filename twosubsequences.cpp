#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string temp = s;
		char a[2],b[2];
		int i;
		int min,count=0;
		for(i=0;i<s.size();i++){
			sort(s.begin(),s.end());
			min = s[0];
			if(s[i] < min)min = s[i];
		}
		printf("%c ", min);
		for(i=0;i<s.size();i++){
			if(temp[i] == min && count==0){
				count++;
				continue;
			}
			cout << temp[i];
		}
		cout << "\n";
	}
	return 0;
}
