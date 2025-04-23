#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int i;
	for(i=1;i<=n;i++){
		if(i%2==0 && i!=n)cout << "I love that" << ' ';
		else if(i%2==0 && i==n)cout << "I love it" << ' ';
		else if(i%2!=0 && i!=n)cout << "I hate that" << ' ';
		else cout << "I hate it" << ' ';
	}
	return 0;
}
