#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int i;
	int x[101];
	int count=0;
	for(i=0;i<n;i++){
		cin >> x[i];
	}
	for(i=0;i<n;i++){
		if(x[i] < x[i+1]){
			swap(x[i],x[i+1]);
			count+=1;
		}
		
	}
	cout << count << endl;
	return 0;
}
