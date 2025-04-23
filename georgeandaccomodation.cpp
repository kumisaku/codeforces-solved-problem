#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	int count=0;
	while(t--){
		int n,p;
		
		cin >> n >> p;
		if(n < (p-1))count++;
	}
	cout << count << endl;
}
