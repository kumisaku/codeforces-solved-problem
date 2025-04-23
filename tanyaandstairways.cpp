#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int a[t-1];
	int i;
	int count=0;
	bool isEnd = false;
	for(i=0;i<t;i++){
		cin >> a[i];
	}
	for(i=0;i<t;i++){
		if(a[i] > a[i+1]){
			count++;
		}else if(a[i] == a[t])count++;
		
	}
	cout << count << endl;
	for(i=0;i<t;i++){
		
		if(a[i] > a[i+1])cout << a[i] << ' ';
		if(a[i] == a[i+1]){
			cout << a[i] << ' ';
			isEnd = true;
		}

		
	}
	if(isEnd==false){
		cout << a[t];
	}
	
	return 0;
}
