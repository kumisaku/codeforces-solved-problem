#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		char a[101],b[101];
		cin >> a >> b;
		int len1 = strlen(a);
		int i;
		for(i=0;i<len1;i++){
			swap(a[0],b[0]);
			cout << a[i];
		}
		cout << ' ';
		for(i=0;i<len1;i++){
			cout << b[i];
		}
		cout << "\n";
	}
	return 0;
}
